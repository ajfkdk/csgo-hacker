#pragma once

#include"Memory.hpp"
#include "direct3d9.hpp"
#include <iostream>
#include "offset.h"
#include"util.hpp"
#include"visible.hpp"
using namespace std;
dword g_process_id;
handle g_process_handle;
hwnd g_game_hwnd;
hwnd g_transparent_hwnd;
#define random(a,b) (rand()%(b-a)+a)
#define KeyDown -32768
//==============================triggerBOT==========================
bool canTbot = false, isKeyHeld = false;


int g_matrix_address;//全局矩阵地址
int g_angle_address;//全局角度地址
int g_self_address;//全局的自己地址
int g_players_address;//全局的玩家地址===》dwEntityList√

struct module_information engine_module;//定义一个engine模块的信息仓库
struct module_information client_panorama_module;//定义一个client模块的信息仓库

struct menu {
	bool autoAim = false;//自瞄
	bool RSC = false;//无后坐力
	bool BoxEsp = false;//方框透视
	bool SuperJump = false;//连跳
	bool ShotHead = false;//锁头参数
	bool ShotChest = false;//锁胸参数
	bool ShotRandom = false;//锁胸参数
	bool Glow_enemy = false;//队友辉光
	bool Glow_team = false;//对手辉光
	bool TriggerBot = false;//自动开枪
	bool reload_game = false;//
};

//60.0f;头   75.0f胸  70脖子
float aim_location[8] = { 60.0f,75.f,70.f,80.0f,85.0f,76.0f,77.0f ,81.0f };
bool aim_index = false;


float aim_smooth = 1;
float test_b = 0;
 int g_players_count = 0;
struct player_list
{
	bool effective;//是否有效
	int aimbot_len;//自瞄长度
	bool self;//是自己
	float location[3];//身体位置
	float head_bone[3];//头骨位置
	int camp;//阵营
	int blood;//血量
	int armor;//铠甲
	bool helmet;//头盔
	bool mirror;//是否开镜
	int money;//金钱
	float recoil;//后座力y
	float recoil_x;//后座力x
	bool immunity;//买枪状态
	int shot;//是否开枪
	float flash;//闪光度
	float squat;//是否下蹲
	float jump;//是否跳跃

};

struct glow_color_team {
	float alpha = 0.f;
	float blue = 255.0f;
	float green = 0.0f;
	float red = 50.0f;
}glow_color_team;

struct glow_color_enemy
{
	float alpha = 0.f;
	float blue = 237.0f;
	float green = 238.0f;
	float red = 4.0f;
}glow_color_enemy;

float rcsSensitivity = 1;

menu Menu;

float max_fov = 30;

void aimbot(float x, float y);

void Recoil(player_list* player, float current_angle[2]);
struct Vec2
{
	float x;
	float y;
};

//=================memory Puls   ++++++++++++++++++
template<class T>
dword write_memory3(dword address, T buffer)
{
	SIZE_T write_size;
	WriteProcessMemory(g_process_handle, (LPVOID)address, &buffer, sizeof(T), &write_size);
	return write_size;
}

template<class T>
T read_memory3(dword address)
{
	T buffer;
	SIZE_T finish;
	ReadProcessMemory(g_process_handle, (LPCVOID)address, &buffer, sizeof(T), &finish);
	return buffer;
}
