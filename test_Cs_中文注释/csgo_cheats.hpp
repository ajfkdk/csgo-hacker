#pragma once

/*
 ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■
■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■
■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■
■■■■■■■■■■■■■■■■■□■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■
■■■■■■■■■□□■■■■■■□□■■■■■■■■■■■■■■■■■■□□■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■
■■■■■■■■■□□□■■■■■□□□■■■■■■■■■■■■■■■■■■□□■■■■■■■■■■■□■■■■■■■■■■■■■■■■■■■■□□■■■■■□□□□■■■■■■■
■■■■■■■■■□□□■■■■■□□■■■■■■■■■■■■■■■■■■■□□■■■■■■■■□□□□□■■■■■■■■■■■■■■■■■■■□□□□□□□□□□□■■■■■■■
■■■■■■■■■■□■■■■■□□□□□□□□□■■■■■■■■■■■■□□■■■□□□□□□□□□□□■■■■■■■■■■■■■■■■■■■■□□□□□□■□□■■■■■■■■
■■■■■■□□□□□□□□□□□□□□□□□□□■■■■■■■■■■■■□□■■■■□□□□□■□□□■■■■■■■■■■■■□■■■■■■■■□■■■■□□□□■■■■■■■■
■■■□□□□□□□□□□■■■□□□□■■■■■■■■■■■■■■■■■□□■■□■■■■■■■□□■■■■■■■■■■■■■□□■■■□□■■□□□□□□□□□■■■■■■■■
■■■■□□■■■■□■■□□■□□■■■■■■■■■■■■■■■■■■■□□■■□□■■■□■□□■■■■■■■■■■■■■■□□□□□□□□■□□□□□■■□□■■■■■■■■
■■■■■■■■■□□■■□□□□□■■■■■■■■■■■■■■■■■■■□□■■□□■■■□□□□■■■■■■■■■■■■■■□□□□□□□■■□■■■■■□□□■■■■■■■■
■■■■■■■■■□□■□□□□□□■■■■■■■■■■■■■■□□□□□□□□□□□■■■□□□■■■■■■■■■■■■■■■□□■■■□□■□□□□□□□□□□■■■■■■■■
■■■■■■■■■■□□□□■□□■■■■■■■■■■■■■■■□□□□□□□□□□■■■■■□□■■■■■■■■■■■■■■■□□■■■□□■□□□□□□■■■■■■■■■■■■
■■■■■■■■■■□□□□■■□□■■■■■■■■■■■■■■■□□■□□■■□□■■■■■□□■■□□□□■■■■■■■■■■□■■■□■■■□□□■■■■■□□□□■■■■■
■■■■■■■■■□□□■□□■■□□□■■■■■■■■■■■■■■■■□□■■□□■■□□□□□□□□□□□□■■■■■■■■■□□□□□□■■□□□□□□□□□□□□■■■■■
■■■■■■■■□□□■■□□□■■□□□■■■■■■■■■■■■■■■□□■■□□□□□□□□□□□■■■■■■■■■■■■■■□□□□□□■□□□□□□□□□■■□□■■■■■
■■■■■■■□□□■■■■□■■■■□□□■■■■■■■■■■■■■□□■■□□□□□□■■□□■■■■■■■■■■■■■■■□□□■■■■□□□■■□□■■■■■□□■■■■■
■■■■■□□□□■■■□□□□□□□□□□□□□■■■■■■■■■■□□■■□□■■■■■■■□■■■■■■■■■■■■■■■□□■■■■□□□■■■□□■■■■□□■■■■■■
■■■■□□□□□□□□□□□□□□□□□□□□□□■■■■■■■■■□□□□□□■■■■■■■□□■■■■■■■■■■■■■■■□■■■□□□□□■□□□□□□■□□■■■■■■
■■□□□□■■□□□■■■□■■■■■■■■■■■■■■■■■■■■■□□□□□■■■■■■■□□■■■■■■■■■■■■■■■■■■□□□□□□□□□■□□□■□□■■■■■■
■■□□■■■■■■□□■■□■■□□■■■■■■■■■■■■■■■■■■■□□□□□■■■■■□□■■■■■■■■■■■■■■■■■□□□■□□□□□■■■□□■□□■■■■■■
■■■■■■■■■□□□■■□■■□□□□■■■■■■■■■■■■■■■■□□□□□□■■■■■□□■■■■■■■■■■■■■■■■■□□■■□□□□■■■■■■■□□■■■■■■
■■■■■■■□□□□■■■□■■■■□□□□■■■■■■■■■■■■■□□□■■□□■■■■■□□■■■■■■■■■■■■■■■■■■■■■□□□□□□□□□□□□□■■■■■■
■■■■■■□□□■■■■■□■■■■■□□□■■■■■■■■■■■■□□□■■■■□□□□■□□□■■■■■■■■■■■■■■■■■■■■■□□□□□□□□□□□□■■■■■■■
■■■■□□□□■■□□□■□■■■■■■□□■■■■■■■■■■■□□□■■■■■■■□□□□□■■■■■■■■■■■■■■■■■■■■■■■□□■■■□□□■□□■■■■■■■
■■■□□□■■■■■□□□□■■■■■■■□■■■■■■■■■■□□□■■■■■■■■■□□□□■■■■■■■■■■■■■■■■■■■■■■■■■■■■■□□□□□■■■■■■■
■■■■■■■■■■■■□□□■■■■■■■■■■■■■■■■■□□■■■■■■■■■■■■□□□■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■□□□□■■■■■■■
■■■■■■■■■■■■■□□■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■□□■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■□□■■■■■■■■
■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■

*/

#include"gameStruct.hpp"


#include "bsp_parser.hpp"


int g_player_num_count;
int count2 = 64;//用于查找玩家个数
D3DXVECTOR3 get_bone_pos(DWORD base, int index)
{
	typedef struct {
		float Matrix[3][4];
	} Matrix3x4_t;
	DWORD addr = read_memory3<DWORD>(base + hazedumper::netvars::m_dwBoneMatrix);
	if (addr)
	{
		Matrix3x4_t result = read_memory3<Matrix3x4_t>(addr + index * 0x30);

		return{
			result.Matrix[0][3],
			result.Matrix[1][3],
			result.Matrix[2][3]
		};
	}

	return {  };
}
//从内存读取字符串
std::string read_string(DWORD addr, int size)
{
	HANDLE hProcess = OpenProcess(PROCESS_ALL_ACCESS, FALSE, g_process_id);
	if (hProcess == NULL) return "";

	SIZE_T bytes = 0;
	std::string buffer;
	buffer.resize(size);
	ReadProcessMemory(hProcess, (LPCVOID)addr, buffer.data(), size, &bytes);

	CloseHandle(hProcess);

	return buffer;
}
rn::bsp_parser m_bsp;		//地图管理器
//加载地图管理器
std::string m_path;			//保存CSGO的路径
void get_map_path() {
	std::string temp = read_string(engine_module.module_address + hazedumper::signatures::dwGameDir, 150);
	m_path = temp.substr(0, strlen(temp.c_str())) + "\\maps";
	std::cout << "[+] 当前游戏路径 : " << m_path << std::endl;
}
/* 更新地图 */
void update_map()
{
	get_map_path();
	static std::string last_map = "";
	static bool state = false;

	DWORD addr = read_memory3<DWORD>(engine_module.module_address + hazedumper::signatures::dwClientState);
	if (addr)
	{
		std::string temp = read_string(addr + hazedumper::signatures::dwClientState_Map, 64);
		std::string current_map = temp.substr(0, strlen(temp.c_str())) + ".bsp";
		if (state == false || last_map != current_map)
		{
			last_map = current_map;
			state = m_bsp.load_map(m_path, current_map);
			std::cout << "[+] 当前游戏地图 : " << last_map << " - " << (state == true ? "成功" : "失败") << std::endl;
			Sleep(300);
		}
	}
}


//获取下蹲状态
bool get_squat_state(player_list* players)
{
	for (int i = 0; i < g_players_count; i++)
		if (players[i].effective && players[i].self) return players[i].squat < 50.0f;
	return false;
}

//获取跳跃状态
bool get_jump_state(player_list* players)
{
	for (int i = 0; i < g_players_count; i++)
		if (players[i].effective && players[i].self) return (int)players[i].jump;

	return false;
}

//获取开镜状态
bool get_open_mirror_state(player_list* players)
{
	for (int i = 0; i < g_players_count; i++)
		if (players[i].effective && players[i].self) {

			return players[i].mirror;


		};
	return false;
}


//获取玩家列表
void get_player_list(struct player_list* players)
{

	handle process = g_process_handle;
	//从内存中实时读取玩家信息
	
	for (int i = 0; i < count2; i++)
	{	
		int player_base_address;
		read_memory(process, (g_players_address + i * 0x10), &player_base_address, sizeof(int));//获取本地玩家的基址
		if (player_base_address == 0) continue;//如果玩家人数为0的话，不读取玩家信息

		//找出玩家个数
		if (g_players_count < i)
		{
			g_players_count = i+1;
		}
		
		read_memory(process, player_base_address + hazedumper::netvars::m_iHealth, &players[i].blood, sizeof(int));//血量
		if (players[i].blood <= 0) continue;

		
		
		players[i].effective = true;//判定为有效玩家
		players[i].aimbot_len = 9999;//自瞄长度

		int bone_base_address;//骨骼的基本地址
		if (read_memory(process, (player_base_address + 0x26A8), &bone_base_address, sizeof(int)))
		{
			read_memory(process, (bone_base_address + 99 * sizeof(float)), &players[i].head_bone[0], sizeof(float));//x
			read_memory(process, (bone_base_address + 103 * sizeof(float)), &players[i].head_bone[1], sizeof(float));//y
			read_memory(process, (bone_base_address + 107 * sizeof(float)), &players[i].head_bone[2], sizeof(float));//z
		}
		//读取玩家的各类信息
		read_memory(process, player_base_address + hazedumper::netvars::m_vecOrigin, players[i].location, sizeof(players[i].location));
		read_memory(process, player_base_address + hazedumper::netvars::m_iTeamNum, &players[i].camp, sizeof(int));

		//read_memory(process, player_base_address + hazedumper::netvars::m_ArmorValue, &players[i].armor, sizeof(int));
		//read_memory(process, player_base_address + hazedumper::netvars::m_bHasHelmet, &players[i].helmet, sizeof(bool));
		read_memory(process, player_base_address + hazedumper::netvars::m_bIsScoped, &players[i].mirror, sizeof(bool));
		read_memory(process, player_base_address + hazedumper::netvars::m_aimPunchAngle, &players[i].recoil, sizeof(float));
		read_memory(process, player_base_address + hazedumper::netvars::m_aimPunchAngle + sizeof(float), &players[i].recoil_x, sizeof(float));
		//read_memory(process, player_base_address + hazedumper::netvars::m_bGunGameImmunity, &players[i].immunity, sizeof(bool));
		read_memory(process, player_base_address + hazedumper::netvars::m_iShotsFired, &players[i].shot, sizeof(int));
		//read_memory(process, player_base_address + hazedumper::netvars::m_flFlashMaxAlpha, &players[i].flash, sizeof(float));
		read_memory(process, player_base_address + 0x110, &players[i].squat, sizeof(float));
		read_memory(process, player_base_address + 0x11C, &players[i].jump, sizeof(float));

		/*std::cout <<"player index is : "<<i<<"  and  m_iGlowIndex2 is ："<< players[i].m_iGlowIndex << std::endl;*/

		/*read_memory(process, player_base_address + hazedumper::netvars::m_aimPunchAngle, &data, sizeof(float));*/

		/*read_memory(process, player_base_address + hazedumper::netvars::m_aimPunchAngleVel, &data, sizeof(float));
		std::cout <<"后座力3："<< data << std::endl;*/



	}
}

//释放玩家列表内存
void free_player_list(player_list* players)
{
	ZeroMemory(players, sizeof(player_list) * g_players_count);
}

//获取自己的位置
void get_self_location(float* location)
{
	int location_base_address;
	read_memory(g_process_handle, g_self_address, &location_base_address, sizeof(int));
	if (location_base_address)
		read_memory(g_process_handle, location_base_address + 0x35A8, location, sizeof(float) * 3);
}

//设置自己阵营
void set_self_camp(player_list* players)
{
	float self_location[3];
	get_self_location(self_location);

	for (int i = 0; i < g_players_count; i++)
	{
		if (players[i].effective)//人物有效性的判断
		{
			int temp_x = abs((int)self_location[0] - (int)players[i].location[0]);
			int temp_y = abs((int)self_location[1] - (int)players[i].location[1]);
			if (temp_x < 10.0f && temp_y < 10.f)
			{
				players[i].self = true;
				break;
			}
		}
	}
}

//获取自己的阵营
int get_self_camp(player_list* players)
{
	for (int i = 0; i < g_players_count; i++)
		if (players[i].effective && players[i].self) return players[i].camp;
	return 2;
}

//获取自己开枪状态
bool get_shot_state(player_list* players)
{

	for (int i = 0; i < g_players_count; i++)
		if (players[i].effective && players[i].self)
		{
			return players[i].shot;
		}
	return false;
}
void console_menu();
//初始化地址信息
void initialize_address(const char* process_name)
{
	cout << "重新初始化游戏。。。。。。。。。" << endl;
	Sleep(3000);
	dword process_id = get_process_id(process_name);//根据名称获取进程id
	handle process_handle = get_process_handle(process_id);//根据进程id获取窗口句柄
	g_process_id = process_id;//设置进全局pid中去
	g_process_handle = process_handle;//设置到全局句柄中去

	//通过进程句柄和进程pid和模块名获取模块信息并存入信息仓库
	get_module_info(process_handle, process_id, "engine.dll", engine_module);
	get_module_info(process_handle, process_id, "client.dll", client_panorama_module);

	//模块对应的地址
	static DWORD client_addr = client_panorama_module.module_address;
	static DWORD engine_addr = engine_module.module_address;
	
	int matrix_address = client_addr + hazedumper::signatures::dwViewMatrix;
	int angle_address = engine_addr + hazedumper::signatures::dwClientState;
	int self_address = client_addr + hazedumper::signatures::dwLocalPlayer;
	int players_address = client_addr + hazedumper::signatures::dwEntityList;

	srand((int)time(0));//随机函数
	g_matrix_address = matrix_address;
	g_angle_address = angle_address;
	g_self_address = self_address;
	g_players_address = players_address;
	g_player_num_count=0;
	update_map();
	//菜单绘制
	system("pause");
	system("cls");
	console_menu();

}

//获取后座力
float get_recoil(player_list* player)
{
	for (int i = 0; i < g_players_count; i++)
		if (player[i].effective && player[i].self) {

			return player[i].recoil *= 1.0f;


		};
	return 0.0f;
}
float get_recoil_x(player_list* player)
{
	for (int i = 0; i < g_players_count; i++)
		if (player[i].effective && player[i].self) {

			return player[i].recoil_x *= 1.0f;


		};
	return 0.0f;
}

//连跳功能
void SuperJump() {
	/*t_dword local_player = read_memory<t_dword>(g_client + hazedumper::signatures::dwLocalPlayer);
	if (local_player == 0) return;

	int flag = read_memory<int>(local_player + hazedumper::netvars::m_fFlags);
	if (flag == 257 && GetAsyncKeyState(VK_SPACE) & 0x8000)
		write_memory<int>(g_client + hazedumper::signatures::dwForceJump, 6);*/

	DWORD local_player;
	read_memory(g_process_handle, g_self_address, &local_player, sizeof(int));
	if (local_player == 0) return;
	int flag;
	read_memory(g_process_handle, local_player + hazedumper::netvars::m_fFlags, &flag, sizeof(int));
	int a = 6;
	if (flag == 257 && GetAsyncKeyState(VK_SPACE) & 0x8000) {
		write_memory(g_process_handle, client_panorama_module.module_address + hazedumper::signatures::dwForceJump, &a, sizeof(int));
	}


}

//绘制玩家方框
void render_player_box(player_list* players)
{
	int window_x, window_y, window_w, window_h;
	get_window_size(g_game_hwnd, window_x, window_y, window_w, window_h);
	window_w /= 2;
	window_h /= 2;

	float matrix[4][4];
	read_memory(g_process_handle, g_matrix_address, matrix, sizeof(float) * 4 * 4);

	float self_location[3];
	get_self_location(self_location);

	int self_camp = get_self_camp(players);
	



	for (int i = 1; i < g_players_count; i++)
	{
		int x, y, w, h;
	/*	cout <<"========================================="<< endl;
		cout << "player index is :" << i << "     players[i].effective :" << players[i].effective << endl;
		cout<<" to_rect_info:" << to_rect_info(matrix, players[i].location, window_w, window_h, x, y, w, h) << endl;
		cout << "players[i].camp    " << players[i].camp << endl;*/
		if (players[i].effective && players[i].self == false && to_rect_info(matrix, players[i].location, window_w, window_h, x, y, w, h))
		{
			D3DCOLOR color = D3DCOLOR_XRGB(18, 191, 64);//队友的颜色（没有绘制队友功能，这个变量没用到）
			

			

			
			if (self_camp != players[i].camp)
			{
				color = D3DCOLOR_XRGB(218, 177, 115);//敌人的颜色
				//判断敌人是否可见
				
				
				players[i].aimbot_len = get_aimbot_len(window_w, window_h, x + (w / 2), y + (h / 2));//写入最近的敌人
				if (Menu.BoxEsp) {
					render_rect(color, x, y, w, h, 2.0f);
					render_player_blood(players[i].blood, x - 5, y, h);
				}
			}


		}
	}
}

// User D3D To Draw Menu this function is too heavy
void draw_menu() {
	int window_x, window_y, window_w, window_h;
	get_window_size(g_game_hwnd, window_x, window_y, window_w, window_h);
	window_w /= 2;
	window_h /= 2;
	int Screan_X = window_w / 16;
	int Screan_Y = window_h / 1.2;
	D3DCOLOR Choose = D3DCOLOR_XRGB(255, 227, 117);
	D3DCOLOR UnChoose = D3DCOLOR_XRGB(219, 108, 252);
	int index = 20;
	
		render_text(D3DCOLOR_XRGB(223, 31, 38), Screan_X, Screan_Y - 30, "Char_Tea Drinker  ∑");
		if (!Menu.autoAim) {
			render_text(UnChoose, Screan_X, Screan_Y + index * 0, "自动瞄准（数字键1）");
		}
		else
		{
			if (aim_index) {
				//侧键自瞄
				render_text(Choose, Screan_X, Screan_Y + index * 0, "鼠标侧键自瞄");
			}
			else {
				render_text(Choose, Screan_X, Screan_Y + index * 0, "开镜");
			}
		}
		render_text(Menu.BoxEsp ? Choose : UnChoose, Screan_X, Screan_Y + index * 1, "方框透视（数字键2）");
		render_text(Menu.RSC ? Choose : UnChoose, Screan_X, Screan_Y + index * 2, "智能压枪（数字键3）");
		render_text(Menu.SuperJump ? Choose : UnChoose, Screan_X, Screan_Y + index * 3, "连续跳跃（数字键4）");
		render_text(Menu.Glow_enemy ? Choose : UnChoose, Screan_X, Screan_Y + index * 4, "菜单退出游戏（数字键8）");
		render_text(Menu.Glow_team ? Choose : UnChoose, Screan_X, Screan_Y + index * 5, "敌人辉光（数字键9）");
		if (!Menu.TriggerBot)
		{
			render_text(UnChoose, Screan_X, Screan_Y + index * 6, "自动开枪（F2键准备）");
		}
		else {
			render_text(D3DCOLOR_XRGB(108, 226, 108), Screan_X, Screan_Y + index * 6, "按住鼠标侧键开枪");
		}
		if (Menu.autoAim) {
			render_text(Menu.ShotHead ? Choose : UnChoose, Screan_X, Screan_Y + index * 8, "锁定头部（数字键5）");
			render_text(Menu.ShotChest ? Choose : UnChoose, Screan_X, Screan_Y + index * 9, "锁定胸部（数字键6）");
			render_text(Menu.ShotRandom ? Choose : UnChoose, Screan_X, Screan_Y + index * 10, "默认随机（数字键7）");
		}
	






}

void console_menu() {
	if (!Menu.autoAim) {
		cout << "自动瞄准（数字键1）	"<<"否"<<endl ;
	}
	else
	{
		if (aim_index) {
			//侧键自瞄
			cout << "自动瞄准开启:鼠标侧键自瞄" << endl;
		}
		else {
			cout << "自动瞄准开启::开镜自瞄" << endl;
		}
	}
	cout << endl;

	
	if (Menu.BoxEsp) {
		cout << "方框透视（数字键2）	"<<"是" << endl;
		
	}
	else {
		cout << "方框透视（数字键2）	" << "否" << endl;
	}
	cout << endl;

	
	if (Menu.RSC) {
		cout << "智能压枪（数字键3）	"<<"是" << endl;
	}
	else
	{
		cout << "智能压枪（数字键3）	" << "否" << endl;
	}
	cout << endl;

	if (Menu.SuperJump) {
		cout << "连续跳跃（数字键4）	"<< "是" << endl;
	}
	else
	{
		cout << "连续跳跃（数字键4）	" << "否" << endl;
	}
	cout << endl;

	
	if (Menu.Glow_team) {
		cout << "菜单进入游戏（数字键8）	" << "是" << endl;
	}
	else
	{
		cout << "菜单进入游戏（数字键8）	" << "否" << endl;
	}
	cout << endl;

	
	if (Menu.Glow_enemy) {
		cout << "敌人辉光（数字键9）	"<< "是" << endl;
	}
	else
	{
		cout << "敌人辉光（数字键9）	" << "否" << endl;
	}

	cout << endl;
	
	
	
	if (!Menu.TriggerBot)
	{
		
			cout << "自动开枪（F2键准备）	" << "否" << endl;
		
	}
	else
	{
		cout << "按住鼠标侧键2自动扳机^O^ "<<endl;;
		
	}
	
	
	cout << endl;
	cout << endl;
	if (Menu.autoAim) {

		printf("\033[31m   自瞄参数:");
		printf("\033[0m");
		cout << endl;
		if (Menu.ShotHead) {
			cout << "锁定头部（数字键5）	" <<"是"<< endl;
		}
		else
		{
			cout << "锁定头部（数字键5）	" << "否" << endl;
		}
		cout << endl;
		if (Menu.ShotChest) {
			cout << "锁定胸部（数字键6）	" << "是" << endl;
		}
		else
		{
			cout << "锁定胸部（数字键6）	" << "否" << endl;
		}
		cout << endl;
		if (Menu.ShotRandom) {
			cout << "默认随机（数字键7）	" << "是" << endl;
		}
		else
		{
			cout << "默认随机（数字键7）	" << "否" << endl;
		}
		cout << endl;
		cout << "自瞄平滑：	";
		printf("\033[31m");
		cout << aim_smooth << endl;
		printf("\033[0m");
		cout << endl;
		cout << "自瞄范围：";
		printf("\033[31m");
		cout << max_fov << endl;
		printf("\033[0m");
		
		
	}


	printf("\033[31m       tip:                 换地图或是重新匹配需要  按home  重新初始化游戏:");
	printf("\033[0m");
}

//获取当前角度
void get_current_angle(float* angle)
{
	int angle_base_address;

	if (read_memory(g_process_handle, g_angle_address, &angle_base_address, sizeof(int)))
		read_memory(g_process_handle, angle_base_address + hazedumper::signatures::dwClientState_ViewAngles, angle, sizeof(float) * 2);
	//std::cout << "旧代码中的  当前视角.y " << angle[0] << std::endl;
	//std::cout << "旧代码中的  当前视角.x " << angle[1] << std::endl;
}

//设置当前角度
void set_current_angle(float* angle)
{
	int angle_base_address;

	if (read_memory(g_process_handle, g_angle_address, &angle_base_address, sizeof(int)))
		write_memory(g_process_handle, angle_base_address + hazedumper::signatures::dwClientState_ViewAngles, angle, sizeof(float) * 2);
}

void aimbot(float* x, float* y)
{
	int angle_base_address;

	if (read_memory(g_process_handle, g_angle_address, &angle_base_address, sizeof(int)))
		write_memory(g_process_handle, angle_base_address + hazedumper::signatures::dwClientState_ViewAngles + sizeof(float) * 0, x, sizeof(float));
	write_memory(g_process_handle, angle_base_address + hazedumper::signatures::dwClientState_ViewAngles + sizeof(float) * 1, y, sizeof(float));

}

//获取自瞄角度
void get_aimbot_angle(float* self_location, float* player_location, float* aim_angle, bool squat, float recoil)
{
	float aim_data;

	if (Menu.ShotHead) {
		//开启锁头
		aim_data = aim_location[0];
	}
	else if (Menu.ShotChest) {
		aim_data = aim_location[1];
	}
	else {
		int random_index = random(0, 8);//获取到的数为0--7
		aim_data = aim_location[random_index];

	}


	float x = self_location[0] - player_location[0];
	float y = self_location[1] - player_location[1];
	float z = self_location[2] - player_location[2] + aim_data;//+65代表头部位置
	if (squat) z -= 15.0f;//如果蹲下直接-15

	z -= recoil;

	const float pi = 3.1415f;
	aim_angle[0] = (float)atan(z / sqrt(x * x + y * y)) / pi * 180.f;
	aim_angle[1] = (float)atan(y / x);

	if (x >= 0.0f && y >= 0.0f) aim_angle[1] = aim_angle[1] / pi * 180.0f - 180.0f;
	else if (x < 0.0f && y >= 0.0f) aim_angle[1] = aim_angle[1] / pi * 180.0f;
	else if (x < 0.0f && y < 0.0f) aim_angle[1] = aim_angle[1] / pi * 180.0f;
	else if (x >= 0.0f && y < 0.0f) aim_angle[1] = aim_angle[1] / pi * 180.f + 180.0f;
}

//获取最近的任务骨骼位置
int get_recent_head_location(player_list* players, float* self_location)
{
	int index = -1;
	int camp = get_self_camp(players);


	
	DWORD local_player = read_memory3<DWORD>(client_panorama_module.module_address + hazedumper::signatures::dwLocalPlayer);
	if (local_player == 0) return -1;
	D3DXVECTOR3 local_pos = read_memory3<D3DXVECTOR3>(local_player + hazedumper::netvars::m_vecOrigin);
	local_pos += read_memory3<D3DXVECTOR3>(local_player + hazedumper::netvars::m_vecViewOffset);
	


	for (int i = 0; i < g_players_count; i++)
	{
		if (players[i].effective && camp != players[i].camp)
		{
			//判断敌人是否可见
			if (!m_bsp.is_visible(local_pos, players[i].head_bone)) {
				continue;
			}
			int maxlen = players[index].aimbot_len;
			if (index==-1)
			{
				maxlen = 9999;
			}
			
			 if (maxlen > players[i].aimbot_len) index = i;
		}
	}
	return index;
}




//================= Aim ++++++++++++++++++
//平滑自瞄
void Recoil3(player_list* player, float current_angle[2],float target_angle[2])
{

	static Vec2 oldViewAngle;
	bool shot_state;

	Vec2 当前视角;
	DWORD angle_base_address;


	当前视角.y = target_angle[0];


	当前视角.x = target_angle[1];


	Vec2 后坐力角度;

	float recoil = get_recoil(player);
	/*后坐力角度.y = recoil[0];*/
	float recoil_x = get_recoil_x(player);
	后坐力角度.y = recoil;
	后坐力角度.x = recoil_x;

	后坐力角度.x *= 2.0f * rcsSensitivity;
	后坐力角度.y *= 2.0f * rcsSensitivity;

	Vec2 新的瞄准角度;


	新的瞄准角度.x = ((当前视角.x - 后坐力角度.x));
	新的瞄准角度.y = ((当前视角.y - 后坐力角度.y));
	/*cout << "当前视角X:    " << current_angle[1] << "               当前视角Y:     " << current_angle[0] << endl;
	cout << "新的瞄准角度X:    " << 新的瞄准角度.x << "               新的瞄准角度Y:     " << 新的瞄准角度.y << endl;*/
	float deltax = (新的瞄准角度.x - current_angle[1]);
	float deltay =( 新的瞄准角度.y - current_angle[0]);
	/*cout << "deltaxX:    " << deltax  << "               deltaxY:     " << deltay << endl;*/
	
	float* a = new float;
	if (false) {
		a[0] = 当前视角.y - deltay / aim_smooth;
		a[1] = 当前视角.x - deltax / aim_smooth;
		
	}
	else {
		a[0] = current_angle[0] + deltay / aim_smooth;
		a[1] = current_angle[1] + deltax / aim_smooth;
	}
	
	/*cout << "设置新视角的X:    " << a[1] << "               设置新视角的Y:     " << a[0] << endl;
	cout << endl;
	cout << endl;
	cout << endl;*/

	set_current_angle(a);
	oldViewAngle.x = 后坐力角度.x;
	oldViewAngle.y = 后坐力角度.y;



}
//自瞄开启 max_fov最大的自瞄范围，防止向后秒杀敌人
void aimbot_players(player_list* player )
{

	if (get_jump_state(player)) return;//跳跃判断，跳起来打不准，就不自瞄了


	float self_location[3];
	get_self_location(self_location);//设置自己位置

	int aim_index = get_recent_head_location(player, self_location);//取得最近人物索引
	if (aim_index == -1) return;

	float current_angle[2];
	get_current_angle(current_angle);//获取当前角度

	bool squat = get_squat_state(player);//获取蹲下状态



	float aim_angle[2];
	get_aimbot_angle(self_location, player[aim_index].head_bone, aim_angle, squat, 0); //计算自瞄角度

	if (abs((int)aim_angle[0] - (int)current_angle[0]) > max_fov
		|| abs((int)aim_angle[1] - (int)current_angle[1]) > max_fov)//角度判断
		return;
	
	//抗后座力自瞄(拟人瞄准)
	Recoil3(player, current_angle, aim_angle);
	//set_current_angle(aim_angle);//设置角度


}

//抗后坐力(自瞄)
void Recoil(player_list* player, float current_angle[2])
{

	static Vec2 oldViewAngle;
	bool shot_state;

	Vec2 当前视角;
	DWORD angle_base_address;


	当前视角.y = current_angle[0];


	当前视角.x = current_angle[1];


	Vec2 后坐力角度;

	float recoil = get_recoil(player);
	/*后坐力角度.y = recoil[0];*/
	float recoil_x = get_recoil_x(player);
	后坐力角度.y = recoil;
	后坐力角度.x = recoil_x;

	后坐力角度.x *= 2.0f * rcsSensitivity;
	后坐力角度.y *= 2.0f * rcsSensitivity;

	Vec2 新的瞄准角度;


	新的瞄准角度.x = ((当前视角.x - 后坐力角度.x));
	新的瞄准角度.y = ((当前视角.y - 后坐力角度.y));


	float* a = new float;
	a[0] = 新的瞄准角度.y;
	a[1] = 新的瞄准角度.x;



	set_current_angle(a);
	oldViewAngle.x = 后坐力角度.x;
	oldViewAngle.y = 后坐力角度.y;



}



//抗后坐力
void Recoil2(player_list* player)
{
	//获取两大模块的信息
	static Vec2 oldViewAngle;
	bool shot_state;


	//获取开枪状态
	shot_state = get_shot_state(player);

	if (shot_state)//判断是否开枪
	{
		//DWORD clientStateAddr = reinterpret_cast<DWORD*>(engineAddr + hazedumper::signatures::dwClientState);



		Vec2 当前视角;
		DWORD angle_base_address;




		float current_angle[2];
		get_current_angle(current_angle);//获取当前角度




		当前视角.y = current_angle[0];


		当前视角.x = current_angle[1];


		Vec2 后坐力角度;

		float recoil = get_recoil(player);
		/*后坐力角度.y = recoil[0];*/
		float recoil_x = get_recoil_x(player);
		后坐力角度.y = recoil;
		后坐力角度.x = recoil_x;



		后坐力角度.x *= 2.0f * rcsSensitivity;
		后坐力角度.y *= 2.0f * rcsSensitivity;

		Vec2 新的瞄准角度;

		新的瞄准角度.x = ((当前视角.x - 后坐力角度.x) + oldViewAngle.x);
		新的瞄准角度.y = ((当前视角.y - 后坐力角度.y) + oldViewAngle.y);
		/*当前视角Addr = reinterpret_cast<FLOAT*>(*clientStateAddr + hazedumper::signatures::dwClientState_ViewAngles);
		if (当前视角Addr == nullptr) { return; }
		*当前视角Addr = 新的瞄准角度.y;

		当前视角Addr = reinterpret_cast<FLOAT*>(*clientStateAddr + hazedumper::signatures::dwClientState_ViewAngles + sizeof(float));
		if (当前视角Addr == nullptr) { return; }
		*当前视角Addr = 新的瞄准角度.x;*/
		float* a = new float;
		a[0] = 新的瞄准角度.y;
		a[1] = 新的瞄准角度.x;

		set_current_angle(a);
		oldViewAngle.x = 后坐力角度.x;
		oldViewAngle.y = 后坐力角度.y;


	}
	else
	{
		oldViewAngle.x = 0;
		oldViewAngle.y = 0;


	}
}

void Key_Listeners() {
	int flag = get_key_state();
	if (flag == 1)
	{
		Menu.autoAim = !Menu.autoAim;
		if (Menu.autoAim) {
			aim_index = !aim_index;
		}
		system("cls");
		console_menu();
		Sleep(300);
	}
	else if (flag == 2) {
		Menu.BoxEsp = !Menu.BoxEsp; 
		system("cls");
		console_menu();
		Sleep(300);
	}
	else if (flag == 3) {
		Menu.RSC = !Menu.RSC;
		system("cls");
		console_menu();
		Sleep(300);
	}
	else if (flag == 4) {
		Menu.SuperJump = !Menu.SuperJump;
		system("cls");
		console_menu();

		Sleep(300);
	}
	else if (flag == 5) {
		Menu.ShotHead = !Menu.ShotHead;
		system("cls");
		console_menu();
		Menu.ShotChest = false;
		Menu.ShotRandom = false;
		Sleep(300);
	}
	else if (flag == 6) {
		Menu.ShotChest = !Menu.ShotChest;
		system("cls");
		console_menu();
		Menu.ShotRandom = false;
		Menu.ShotHead = false;
		Sleep(300);
	}
	else if (flag == 7) {
		Menu.ShotRandom = !Menu.ShotRandom;
		system("cls");
		console_menu();
		Menu.ShotChest = false;
		Menu.ShotHead = false;
		Sleep(300);
	}
	else if (flag == 8) {
		Menu.Glow_enemy = !Menu.Glow_enemy;
		system("cls");
		console_menu();
		Sleep(300);
	}
	else if (flag == 9) {
		Menu.Glow_team = !Menu.Glow_team;
		system("cls");
		console_menu();
		Sleep(300);
	}
	else if (GetAsyncKeyState(VK_F2) & 1) {
		isKeyHeld = !isKeyHeld;
		Menu.TriggerBot = !Menu.TriggerBot;
		system("cls");
		console_menu();

		Sleep(300);
	}
	else if (GetAsyncKeyState(VK_HOME) & 1) {
		Menu.reload_game = !Menu.reload_game;
		system("cls");
		console_menu();

		Sleep(300);
	}
	else if (GetAsyncKeyState(VK_UP) & 1) {
		aim_smooth += 0.1;
		system("cls");
		console_menu();
		
		
	}
	else if (GetAsyncKeyState(VK_DOWN) & 1) {
		aim_smooth -= 0.1;
		system("cls");
		console_menu();
		
		
	}
	else if (GetAsyncKeyState(VK_LEFT) & 1) {
		max_fov -= 1;
		system("cls");
		console_menu();
	}else if (GetAsyncKeyState(VK_RIGHT) & 1) {
		max_fov += 1;
		system("cls");
		console_menu();
	}

}




//=================glow() oldfunction     ++++++++++++++++++
void glow()
{

	DWORD local_player = read_memory3<DWORD>(client_panorama_module.module_address + hazedumper::signatures::dwLocalPlayer);
	//自己的地址！！
	if (local_player == 0) return;
	int team = read_memory3<int>(local_player + hazedumper::netvars::m_iTeamNum);//获取队伍成功获取阵营2 敌人3
	DWORD glow_manager = read_memory3<DWORD>(client_panorama_module.module_address + hazedumper::signatures::dwGlowObjectManager);//获取辉光管理器

	if (glow_manager == 0) return;



	for (int i = 1; i < g_players_count; i++)
	{
		DWORD entity = read_memory3<DWORD>(client_panorama_module.module_address + hazedumper::signatures::dwEntityList + i * 0x10);//获取人物的地址   对象基址
		if (entity == 0 || entity == local_player) continue;

		

		int entity_team = read_memory3<int>(entity + hazedumper::netvars::m_iTeamNum);//读取阵营信息
		int entity_glow_index = read_memory3<int>(entity + hazedumper::netvars::m_iGlowIndex);//获取辉光指数

		if (team != entity_team && Menu.Glow_team) {
			write_memory(g_process_handle, glow_manager + ((entity_glow_index * 0x38) + 8), &glow_color_team, sizeof(glow_color_team));
		}
		if (team == entity_team && Menu.Glow_enemy)
		{
			write_memory(g_process_handle, glow_manager + ((entity_glow_index * 0x38) + 8), &glow_color_enemy, sizeof(glow_color_enemy));
		}


		write_memory3<bool>(glow_manager + ((entity_glow_index * 0x38) + 40), true); // 写入标志36
		write_memory3<bool>(glow_manager + ((entity_glow_index * 0x38) + 41), false);//37
	}
}

//=================triggerbot  ++++++++++++++++++
void shot() {
	int a = 5;
	write_memory(g_process_handle, client_panorama_module.module_address + hazedumper::signatures::dwForceAttack, &a, sizeof(int));
	Sleep(20);
	a = 4;
	write_memory(g_process_handle, client_panorama_module.module_address + hazedumper::signatures::dwForceAttack, &a, sizeof(int));

}

bool checkTbot() {
	/*DWORD local_player;
	read_memory(g_process_handle, g_self_address, &local_player, sizeof(int));*/
	int crosshair;

	DWORD local_player = read_memory3<DWORD>(g_self_address);
	if (local_player == 0) return false;
	int team = read_memory3<int>(local_player + hazedumper::netvars::m_iTeamNum);//获取队伍成功获取阵营2 敌人3

	read_memory(g_process_handle, local_player + hazedumper::netvars::m_iCrosshairId, &crosshair, sizeof(int));
	if (crosshair != 0 && crosshair < 64)
	{
		dword entity;
		read_memory(g_process_handle, client_panorama_module.module_address + hazedumper::signatures::dwEntityList + ((crosshair - 1) * 0x10), &entity, sizeof(dword));
		int eteam;
		read_memory(g_process_handle, entity + hazedumper::netvars::m_iTeamNum, &eteam, sizeof(int));
		int ehealth;
		read_memory(g_process_handle, entity + hazedumper::netvars::m_iTeamNum, &ehealth, sizeof(int));
		if (eteam != team && ehealth > 0) {
			return true;
		}
		else
		{
			return false;
		}
	}
	return false;
}

void handleTbot() {
	if (checkTbot()) {
		shot();
	}
}

void Triggerbot() {





	if (GetAsyncKeyState(VK_XBUTTON1) == KeyDown && isKeyHeld) {

		canTbot = TRUE;
	}
	else
	{
		canTbot = false;
	}
	if (canTbot) {
		handleTbot();
	}
	Sleep(1);


}

//is visible function============================
void glow_plus()
{
	//自己的地址！！
	DWORD local_player = read_memory3<DWORD>(client_panorama_module.module_address + hazedumper::signatures::dwLocalPlayer);
	if (local_player == 0) return;

	int team = read_memory3<int>(local_player + hazedumper::netvars::m_iTeamNum);//获取队伍成功获取阵营2 敌人3
	DWORD glow_manager = read_memory3<DWORD>(client_panorama_module.module_address + hazedumper::signatures::dwGlowObjectManager);//获取辉光管理器
	if (glow_manager == 0) return;

	/* 获取自己眼睛位置 */
	D3DXVECTOR3 local_pos = read_memory3<D3DXVECTOR3>(local_player + hazedumper::netvars::m_vecOrigin);
	local_pos += read_memory3<D3DXVECTOR3>(local_player + hazedumper::netvars::m_vecViewOffset);


	for (int i = 1; i < g_players_count; i++)
	{

		DWORD entity = read_memory3<DWORD>(client_panorama_module.module_address + hazedumper::signatures::dwEntityList + i * 0x10);///* 获取玩家基址 */
		if (entity == 0 || entity == local_player) continue;


		int entity_team = read_memory3<int>(entity + hazedumper::netvars::m_iTeamNum);//读取阵营信息
		int entity_glow_index = read_memory3<int>(entity + hazedumper::netvars::m_iGlowIndex);//获取辉光指数

		/* 获取玩家头部骨骼 */
		D3DXVECTOR3 bone = get_bone_pos(entity, 8);

		if (team == entity_team) continue;

		if (m_bsp.is_visible(local_pos, bone)) {
			
			write_memory(g_process_handle, glow_manager + ((entity_glow_index * 0x38) + 8), &glow_color_team, sizeof(glow_color_team));
		}
		else {
			//cout << i << "  敌人不可见------" << endl;
			write_memory(g_process_handle, glow_manager + ((entity_glow_index * 0x38) + 8), &glow_color_enemy, sizeof(glow_color_enemy));
		}

		write_memory3<bool>(glow_manager + ((entity_glow_index * 0x38) + 40), true); // 写入标志36
		write_memory3<bool>(glow_manager + ((entity_glow_index * 0x38) + 41), false);//37
	}
}

////时间变量，用于监听方法的实现时间
//time_t seconds;


//工作开始
void cheats_doing()
{
	
	
	player_list players[64]{ 0 };

	get_player_list(players);//获取玩家信息

	set_self_camp(players);//设置自己的队友

	render_player_box(players);//获取玩家2D信息 




	//按键监听
	Key_Listeners();

	if (Menu.RSC) {
		//开启无后坐力
		Recoil2(players);
	}

	if (Menu.autoAim) {
		//开启自动瞄准
		if (Menu.RSC) {
			Menu.RSC = !Menu.RSC;
		}
		if (aim_index) {
			if (GetAsyncKeyState(VK_XBUTTON2)==KeyDown)
			{//侧键自瞄
				aimbot_players(players);
			}
		}
		else {//开镜自瞄
			if (get_open_mirror_state(players)) {
				aimbot_players(players);
			};
		}

	}
	if (Menu.SuperJump) {
		//开启连跳
		SuperJump();
	}
	if (Menu.Glow_enemy ) {
		draw_menu();
	}
	if (Menu.Glow_team)
	{
		//glow_plus();自瞄加强版，增加了可视化判断，但是地图解析器不太给力，出现了一些bug不用
		glow();
	}
	if (Menu.TriggerBot) {
		Triggerbot();
	}
	if (Menu.reload_game) {
		initialize_address("csgo.exe");
		Menu.reload_game = false;
		Sleep(3000);
	}


	

}

//开始操作
void start_cheats_csgo()
{
	initialize_address("csgo.exe");//获取csgo的地址信息
	//获取地图信息一次只能执行一个地图===bug
	
	g_cheating = cheats_doing;

	hwnd game_hwnd = FindWindowA(nullptr, "Counter-Strike: Global Offensive");//获取游戏的窗口句柄
	hwnd transparent_hwnd = create_transparent_window(game_hwnd);//透明的窗口句柄
	//把值放入全局的窗口句柄中去
	g_game_hwnd = game_hwnd;
	g_transparent_hwnd = transparent_hwnd;
	//初始化d3d引擎
	initialize_direct3d9(transparent_hwnd);

	
	//消息处理
	message_handle(game_hwnd, transparent_hwnd);

}





