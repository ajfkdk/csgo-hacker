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


int g_matrix_address;//ȫ�־����ַ
int g_angle_address;//ȫ�ֽǶȵ�ַ
int g_self_address;//ȫ�ֵ��Լ���ַ
int g_players_address;//ȫ�ֵ���ҵ�ַ===��dwEntityList��

struct module_information engine_module;//����һ��engineģ�����Ϣ�ֿ�
struct module_information client_panorama_module;//����һ��clientģ�����Ϣ�ֿ�

struct menu {
	bool autoAim = false;//����
	bool RSC = false;//�޺�����
	bool BoxEsp = false;//����͸��
	bool SuperJump = false;//����
	bool ShotHead = false;//��ͷ����
	bool ShotChest = false;//���ز���
	bool ShotRandom = false;//���ز���
	bool Glow_enemy = false;//���ѻԹ�
	bool Glow_team = false;//���ֻԹ�
	bool TriggerBot = false;//�Զ���ǹ
	bool reload_game = false;//
};

//60.0f;ͷ   75.0f��  70����
float aim_location[8] = { 60.0f,75.f,70.f,80.0f,85.0f,76.0f,77.0f ,81.0f };
bool aim_index = false;


float aim_smooth = 1;
float test_b = 0;
 int g_players_count = 0;
struct player_list
{
	bool effective;//�Ƿ���Ч
	int aimbot_len;//���鳤��
	bool self;//���Լ�
	float location[3];//����λ��
	float head_bone[3];//ͷ��λ��
	int camp;//��Ӫ
	int blood;//Ѫ��
	int armor;//����
	bool helmet;//ͷ��
	bool mirror;//�Ƿ񿪾�
	int money;//��Ǯ
	float recoil;//������y
	float recoil_x;//������x
	bool immunity;//��ǹ״̬
	int shot;//�Ƿ�ǹ
	float flash;//�����
	float squat;//�Ƿ��¶�
	float jump;//�Ƿ���Ծ

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
