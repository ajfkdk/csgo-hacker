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
int count2 = 64; // Use to find the number of players
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
// Reads the string from memory
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
rn::bsp_parser m_bsp;	// Map Manager	
// Load the map manager
std::string m_path;			//Save the path to CSGO
void get_map_path() {
	std::string temp = read_string(engine_module.module_address + hazedumper::signatures::dwGameDir, 150);
	m_path = temp.substr(0, strlen(temp.c_str())) + "\\maps";
	std::cout << "[+] Current Game Path : " << m_path << std::endl;
}

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
			std::cout << "[+] Current Game Map : " << last_map << " - " << (state == true ? "success" : "fail") << std::endl;
			Sleep(300);
		}
	}
}



bool get_squat_state(player_list* players)
{
	for (int i = 0; i < g_players_count; i++)
		if (players[i].effective && players[i].self) return players[i].squat < 50.0f;
	return false;
}


bool get_jump_state(player_list* players)
{
	for (int i = 0; i < g_players_count; i++)
		if (players[i].effective && players[i].self) return (int)players[i].jump;

	return false;
}

bool get_open_mirror_state(player_list* players)
{
	for (int i = 0; i < g_players_count; i++)
		if (players[i].effective && players[i].self) {

			return players[i].mirror;


		};
	return false;
}



void get_player_list(struct player_list* players)
{

	handle process = g_process_handle;
	// Read player information from memory in real time
	
	for (int i = 0; i < count2; i++)
	{	
		int player_base_address;
		read_memory(process, (g_players_address + i * 0x10), &player_base_address, sizeof(int));// Get the local player's base address
		if (player_base_address == 0) continue;// If the number of players is zero, no player information is read

		// Find the number of players in the game
		if (g_players_count < i)
		{
			g_players_count = i+1;
		}
		
		read_memory(process, player_base_address + hazedumper::netvars::m_iHealth, &players[i].blood, sizeof(int));
		if (players[i].blood <= 0) continue;

		
		
		players[i].effective = true;//
		players[i].aimbot_len = 9999;//

		int bone_base_address;//
		if (read_memory(process, (player_base_address + 0x26A8), &bone_base_address, sizeof(int)))
		{
			read_memory(process, (bone_base_address + 99 * sizeof(float)), &players[i].head_bone[0], sizeof(float));//x
			read_memory(process, (bone_base_address + 103 * sizeof(float)), &players[i].head_bone[1], sizeof(float));//y
			read_memory(process, (bone_base_address + 107 * sizeof(float)), &players[i].head_bone[2], sizeof(float));//z
		}
		// Read various information about the player
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



	}
}

void free_player_list(player_list* players)
{
	ZeroMemory(players, sizeof(player_list) * g_players_count);
}


void get_self_location(float* location)
{
	int location_base_address;
	read_memory(g_process_handle, g_self_address, &location_base_address, sizeof(int));
	if (location_base_address)
		read_memory(g_process_handle, location_base_address + 0x35A8, location, sizeof(float) * 3);
}

// Set your own faction
void set_self_camp(player_list* players)
{
	float self_location[3];
	get_self_location(self_location);

	for (int i = 0; i < g_players_count; i++)
	{
		if (players[i].effective)// Determinate the effectiveness of the character
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

// Get your own faction
int get_self_camp(player_list* players)
{
	for (int i = 0; i < g_players_count; i++)
		if (players[i].effective && players[i].self) return players[i].camp;
	return 2;
}

// Get the self-firing status
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
// Initialize the address information
void initialize_address(const char* process_name)
{
	cout << "Reinitialize the game。。。。。。。。。" << endl;
	
	dword process_id = get_process_id(process_name);//Gets the process ID by name
	handle process_handle = get_process_handle(process_id);//Gets the window handle based on the process ID
	g_process_id = process_id;//Set to the global PID
	g_process_handle = process_handle;//Set to the global handle

	//Get module information through process handle, process pid and module name and store it in the information warehouse
	get_module_info(process_handle, process_id, "engine.dll", engine_module);
	get_module_info(process_handle, process_id, "client.dll", client_panorama_module);

	//The address of the module
	static DWORD client_addr = client_panorama_module.module_address;
	static DWORD engine_addr = engine_module.module_address;
	
	int matrix_address = client_addr + hazedumper::signatures::dwViewMatrix;
	int angle_address = engine_addr + hazedumper::signatures::dwClientState;
	int self_address = client_addr + hazedumper::signatures::dwLocalPlayer;
	int players_address = client_addr + hazedumper::signatures::dwEntityList;

	srand((int)time(0));//// Random function
	g_matrix_address = matrix_address;
	g_angle_address = angle_address;
	g_self_address = self_address;
	g_players_address = players_address;
	g_player_num_count=0;
	update_map();
	// Menu drawing
	system("pause");
	system("cls");
	console_menu();

}

// Get the recoil force
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

// Draw the player box
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
			D3DCOLOR color = D3DCOLOR_XRGB(18, 191, 64);//The color of a teammate (no draw teammate function, this variable is not used)
			

			

			
			if (self_camp != players[i].camp)
			{
				color = D3DCOLOR_XRGB(218, 177, 115);//The Color of the Enemy
				
				
				
				players[i].aimbot_len = get_aimbot_len(window_w, window_h, x + (w / 2), y + (h / 2));//Write the nearest enem
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
			render_text(UnChoose, Screan_X, Screan_Y + index * 0, "Auto Aim（numeric key1）");
		}
		else
		{
			if (aim_index) {
				//侧键自瞄
				render_text(Choose, Screan_X, Screan_Y + index * 0, "Use the mouse side key 1 to autoAim");
			}
			else {
				render_text(Choose, Screan_X, Screan_Y + index * 0, "open mirror to autoAim");
			}
		}
		render_text(Menu.BoxEsp ? Choose : UnChoose, Screan_X, Screan_Y + index * 1, "Box ESP（numeric key2）");
		render_text(Menu.RSC ? Choose : UnChoose, Screan_X, Screan_Y + index * 2, "RCS（numeric key3）");
		render_text(Menu.SuperJump ? Choose : UnChoose, Screan_X, Screan_Y + index * 3, "Super Jump（numeric key4）");
		render_text(Menu.Glow_enemy ? Choose : UnChoose, Screan_X, Screan_Y + index * 4, "hide menu（numeric key8）");
		render_text(Menu.Glow_team ? Choose : UnChoose, Screan_X, Screan_Y + index * 5, "enemy glow（numeric key9）");
		if (!Menu.TriggerBot)
		{
			render_text(UnChoose, Screan_X, Screan_Y + index * 6, "Trigger（F2 Ready）");
		}
		else {
			render_text(D3DCOLOR_XRGB(108, 226, 108), Screan_X, Screan_Y + index * 6, "Hold down the mouse side button to auto trigger");
		}
		if (Menu.autoAim) {
			render_text(Menu.ShotHead ? Choose : UnChoose, Screan_X, Screan_Y + index * 8, "aim head（numeric key5）");
			render_text(Menu.ShotChest ? Choose : UnChoose, Screan_X, Screan_Y + index * 9, "aim chest（numeric key6）");
			render_text(Menu.ShotRandom ? Choose : UnChoose, Screan_X, Screan_Y + index * 10, "random shot（numeric key7）");
		}
	






}

void console_menu() {
	if (!Menu.autoAim) {
		cout << "auto Aim（numeric key1）	"<<"no"<<endl ;
	}
	else
	{
		if (aim_index) {
			// mouse side key
			cout << "autoAim is on:Use the mouse side key 1 to autoAim" << endl;
		}
		else {
			cout << "autoAim is on::Turn on the sight to autoAim" << endl;
		}
	}
	cout << endl;

	
	if (Menu.BoxEsp) {
		cout << "box ESP（numeric key2）	"<<"yes" << endl;
		
	}
	else {
		cout << "box ESP（numeric key2）	" << "no" << endl;
	}
	cout << endl;

	
	if (Menu.RSC) {
		cout << "RCS（numeric key3）	"<<"yes" << endl;
	}
	else
	{
		cout << "RCS（numeric key3）	" << "no" << endl;
	}
	cout << endl;

	if (Menu.SuperJump) {
		cout << "super jump（numeric key4）	"<< "yes" << endl;
	}
	else
	{
		cout << "super jump（numeric key4）	" << "no" << endl;
	}
	cout << endl;

	
	if (Menu.Glow_team) {
		cout << "Let Menu entry game（numeric key8）	" << "yes" << endl;
	}
	else
	{
		cout << "Let Menu entry game（numeric key8）	" << "no" << endl;
	}
	cout << endl;

	
	if (Menu.Glow_enemy) {
		cout << "The enemy glow（numeric key9）	"<< "yes" << endl;
	}
	else
	{
		cout << "The enemy glow（numeric key9）	" << "no" << endl;
	}

	cout << endl;
	
	
	
	if (!Menu.TriggerBot)
	{
		
			cout << "TriggerBot（press key F2 to ready）	" << "no" << endl;
		
	}
	else
	{
		cout << "Press and hold the mouse side key 2 automatic trigger ^O^ "<<endl;;
		
	}
	
	
	cout << endl;
	cout << endl;
	if (Menu.autoAim) {

		printf("\033[31m   aim parameter:");
		printf("\033[0m");
		cout << endl;
		if (Menu.ShotHead) {
			cout << "aim head（numeric key5）	" <<"yes"<< endl;
		}
		else
		{
			cout << "aim head（numeric key5）	" << "no" << endl;
		}
		cout << endl;
		if (Menu.ShotChest) {
			cout << "aim chest（numeric key6）	" << "yes" << endl;
		}
		else
		{
			cout << "aim chest（numeric key6）	" << "no" << endl;
		}
		cout << endl;
		if (Menu.ShotRandom) {
			cout << "Random shoot（numeric key7）	" << "yes" << endl;
		}
		else
		{
			cout << "Random shoot（numeric key7）	" << "no" << endl;
		}
		cout << endl;
		cout << "autoAim  smooth：	";
		printf("\033[31m");
		cout << aim_smooth << endl;
		printf("\033[0m");
		cout << endl;
		cout << "autoAim scope：";
		printf("\033[31m");
		cout << max_fov << endl;
		printf("\033[0m");
		
		
	}


	printf("\033[31m       tip:        To change the map or rematch, you need to press Home to reinitialize the game:");
	printf("\033[0m");
}

//Get the current Angle
void get_current_angle(float* angle)
{
	int angle_base_address;

	if (read_memory(g_process_handle, g_angle_address, &angle_base_address, sizeof(int)))
		read_memory(g_process_handle, angle_base_address + hazedumper::signatures::dwClientState_ViewAngles, angle, sizeof(float) * 2);
	
}

//Set the current Angle
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

//Gets the self-aiming Angle
void get_aimbot_angle(float* self_location, float* player_location, float* aim_angle, bool squat, float recoil)
{
	float aim_data;

	if (Menu.ShotHead) {
		
		aim_data = aim_location[0];
	}
	else if (Menu.ShotChest) {
		aim_data = aim_location[1];
	}
	else {
		int random_index = random(0, 8);//The number we get is 0--7
		aim_data = aim_location[random_index];

	}


	float x = self_location[0] - player_location[0];
	float y = self_location[1] - player_location[1];
	float z = self_location[2] - player_location[2] + aim_data;//+65It's head position
	if (squat) z -= 15.0f;//If you squat down, go straight to -15

	z -= recoil;

	const float pi = 3.1415f;
	aim_angle[0] = (float)atan(z / sqrt(x * x + y * y)) / pi * 180.f;
	aim_angle[1] = (float)atan(y / x);

	if (x >= 0.0f && y >= 0.0f) aim_angle[1] = aim_angle[1] / pi * 180.0f - 180.0f;
	else if (x < 0.0f && y >= 0.0f) aim_angle[1] = aim_angle[1] / pi * 180.0f;
	else if (x < 0.0f && y < 0.0f) aim_angle[1] = aim_angle[1] / pi * 180.0f;
	else if (x >= 0.0f && y < 0.0f) aim_angle[1] = aim_angle[1] / pi * 180.f + 180.0f;
}

//Get the nearest character bone position
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
			//Determine if the enemy is visible
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
//Smooth the aim
void Recoil3(player_list* player, float current_angle[2],float target_angle[2])
{

	static Vec2 oldViewAngle;
	bool shot_state;

	Vec2 current_view;
	DWORD angle_base_address;


	current_view.y = target_angle[0];


	current_view.x = target_angle[1];


	Vec2 recoil_angle;

	float recoil = get_recoil(player);
	/*recoil_angle.y = recoil[0];*/
	float recoil_x = get_recoil_x(player);
	recoil_angle.y = recoil;
	recoil_angle.x = recoil_x;

	recoil_angle.x *= 2.0f * rcsSensitivity;
	recoil_angle.y *= 2.0f * rcsSensitivity;

	Vec2 New_aiming_Angle;


	New_aiming_Angle.x = ((current_view.x - recoil_angle.x));
	New_aiming_Angle.y = ((current_view.y - recoil_angle.y));
	/*cout << "current_viewX:    " << current_angle[1] << "               current_viewY:     " << current_angle[0] << endl;
	cout << "New_aiming_AngleX:    " << New_aiming_Angle.x << "               New_aiming_AngleY:     " << New_aiming_Angle.y << endl;*/
	float deltax = (New_aiming_Angle.x - current_angle[1]);
	float deltay =( New_aiming_Angle.y - current_angle[0]);
	/*cout << "deltaxX:    " << deltax  << "               deltaxY:     " << deltay << endl;*/
	
	float* a = new float;
	if (false) {
		a[0] = current_view.y - deltay / aim_smooth;
		a[1] = current_view.x - deltax / aim_smooth;
		
	}
	else {
		a[0] = current_angle[0] + deltay / aim_smooth;
		a[1] = current_angle[1] + deltax / aim_smooth;
	}


	set_current_angle(a);
	oldViewAngle.x = recoil_angle.x;
	oldViewAngle.y = recoil_angle.y;



}
//Enables max_fov's maximum range of aim to prevent killing enemies seconds backwards
void aimbot_players(player_list* player )
{

	if (get_jump_state(player)) return;//Jump to judge, jump up to play is not allowed, not from the aim


	float self_location[3];
	get_self_location(self_location);

	int aim_index = get_recent_head_location(player, self_location);//Get the latest character index
	if (aim_index == -1) return;

	float current_angle[2];
	get_current_angle(current_angle);//Get the current Angle

	bool squat = get_squat_state(player);//Gets the squat state



	float aim_angle[2];
	get_aimbot_angle(self_location, player[aim_index].head_bone, aim_angle, squat, 0); //Calculate the Autoaiming Angle

	if (abs((int)aim_angle[0] - (int)current_angle[0]) > max_fov
		|| abs((int)aim_angle[1] - (int)current_angle[1]) > max_fov)//Angle judgment
		return;
	
	// Anti-recoil target (anthropomorphic target)
	Recoil3(player, current_angle, aim_angle);
	//set_current_angle(aim_angle);//Set the Angle


}

// Anti-recoil (auto aim)
void Recoil(player_list* player, float current_angle[2])
{

	static Vec2 oldViewAngle;
	bool shot_state;

	Vec2 current_view;
	DWORD angle_base_address;


	current_view.y = current_angle[0];


	current_view.x = current_angle[1];


	Vec2 recoil_angle;

	float recoil = get_recoil(player);
	/*recoil_angle.y = recoil[0];*/
	float recoil_x = get_recoil_x(player);
	recoil_angle.y = recoil;
	recoil_angle.x = recoil_x;

	recoil_angle.x *= 2.0f * rcsSensitivity;
	recoil_angle.y *= 2.0f * rcsSensitivity;

	Vec2 New_aiming_Angle;


	New_aiming_Angle.x = ((current_view.x - recoil_angle.x));
	New_aiming_Angle.y = ((current_view.y - recoil_angle.y));


	float* a = new float;
	a[0] = New_aiming_Angle.y;
	a[1] = New_aiming_Angle.x;



	set_current_angle(a);
	oldViewAngle.x = recoil_angle.x;
	oldViewAngle.y = recoil_angle.y;



}



//resist  recoil
void Recoil2(player_list* player)
{
	// Get information about the two modules
	static Vec2 oldViewAngle;
	bool shot_state;


	// Get the firing status
	shot_state = get_shot_state(player);

	if (shot_state)
	{
		//DWORD clientStateAddr = reinterpret_cast<DWORD*>(engineAddr + hazedumper::signatures::dwClientState);



		Vec2 current_view;
		DWORD angle_base_address;




		float current_angle[2];
		get_current_angle(current_angle);//Get the current Angle




		current_view.y = current_angle[0];


		current_view.x = current_angle[1];


		Vec2 recoil_angle;

		float recoil = get_recoil(player);
		/*recoil_angle.y = recoil[0];*/
		float recoil_x = get_recoil_x(player);
		recoil_angle.y = recoil;
		recoil_angle.x = recoil_x;



		recoil_angle.x *= 2.0f * rcsSensitivity;
		recoil_angle.y *= 2.0f * rcsSensitivity;

		Vec2 New_aiming_Angle;

		New_aiming_Angle.x = ((current_view.x - recoil_angle.x) + oldViewAngle.x);
		New_aiming_Angle.y = ((current_view.y - recoil_angle.y) + oldViewAngle.y);
		/*current_viewAddr = reinterpret_cast<FLOAT*>(*clientStateAddr + hazedumper::signatures::dwClientState_ViewAngles);
		if (current_viewAddr == nullptr) { return; }
		*current_viewAddr = New_aiming_Angle.y;

		current_viewAddr = reinterpret_cast<FLOAT*>(*clientStateAddr + hazedumper::signatures::dwClientState_ViewAngles + sizeof(float));
		if (current_viewAddr == nullptr) { return; }
		*current_viewAddr = New_aiming_Angle.x;*/
		float* a = new float;
		a[0] = New_aiming_Angle.y;
		a[1] = New_aiming_Angle.x;

		set_current_angle(a);
		oldViewAngle.x = recoil_angle.x;
		oldViewAngle.y = recoil_angle.y;


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

	if (local_player == 0) return;
	int team = read_memory3<int>(local_player + hazedumper::netvars::m_iTeamNum);//
	DWORD glow_manager = read_memory3<DWORD>(client_panorama_module.module_address + hazedumper::signatures::dwGlowObjectManager);//Gets the glow manager

	if (glow_manager == 0) return;



	for (int i = 1; i < g_players_count; i++)
	{
		DWORD entity = read_memory3<DWORD>(client_panorama_module.module_address + hazedumper::signatures::dwEntityList + i * 0x10);//Gets the character's address object base address
		if (entity == 0 || entity == local_player) continue;

		

		int entity_team = read_memory3<int>(entity + hazedumper::netvars::m_iTeamNum);//
		int entity_glow_index = read_memory3<int>(entity + hazedumper::netvars::m_iGlowIndex);// Get the glow index

		if (team != entity_team && Menu.Glow_team) {
			write_memory(g_process_handle, glow_manager + ((entity_glow_index * 0x38) + 8), &glow_color_team, sizeof(glow_color_team));
		}
		if (team == entity_team && Menu.Glow_enemy)
		{
			write_memory(g_process_handle, glow_manager + ((entity_glow_index * 0x38) + 8), &glow_color_enemy, sizeof(glow_color_enemy));
		}


		write_memory3<bool>(glow_manager + ((entity_glow_index * 0x38) + 40), true); // 36
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
	
	DWORD local_player = read_memory3<DWORD>(client_panorama_module.module_address + hazedumper::signatures::dwLocalPlayer);
	if (local_player == 0) return;

	int team = read_memory3<int>(local_player + hazedumper::netvars::m_iTeamNum);
	DWORD glow_manager = read_memory3<DWORD>(client_panorama_module.module_address + hazedumper::signatures::dwGlowObjectManager);
	if (glow_manager == 0) return;

	/* Get the position of your eyes */
	D3DXVECTOR3 local_pos = read_memory3<D3DXVECTOR3>(local_player + hazedumper::netvars::m_vecOrigin);
	local_pos += read_memory3<D3DXVECTOR3>(local_player + hazedumper::netvars::m_vecViewOffset);


	for (int i = 1; i < g_players_count; i++)
	{

		DWORD entity = read_memory3<DWORD>(client_panorama_module.module_address + hazedumper::signatures::dwEntityList + i * 0x10);///* Get the player baseAddress */
		if (entity == 0 || entity == local_player) continue;


		int entity_team = read_memory3<int>(entity + hazedumper::netvars::m_iTeamNum);
		int entity_glow_index = read_memory3<int>(entity + hazedumper::netvars::m_iGlowIndex);

		/* Get the player's head skeleton location */
		D3DXVECTOR3 bone = get_bone_pos(entity, 8);

		if (team == entity_team) continue;

		if (m_bsp.is_visible(local_pos, bone)) {
			
			write_memory(g_process_handle, glow_manager + ((entity_glow_index * 0x38) + 8), &glow_color_team, sizeof(glow_color_team));
		}
		else {
			//cout << i << " The enemy is not visible - -----" << endl;
			write_memory(g_process_handle, glow_manager + ((entity_glow_index * 0x38) + 8), &glow_color_enemy, sizeof(glow_color_enemy));
		}

		write_memory3<bool>(glow_manager + ((entity_glow_index * 0x38) + 40), true); // 36
		write_memory3<bool>(glow_manager + ((entity_glow_index * 0x38) + 41), false);//37
	}
}

//// Time variable that listens for the implementation time of a method
//time_t seconds;


//begin hack
void cheats_doing()
{
	
	
	player_list players[64]{ 0 };

	get_player_list(players);//Get player information

	set_self_camp(players);

	render_player_box(players);//Get 2D information from the playerlist




	
	Key_Listeners();

	if (Menu.RSC) {
		//Open with no recoil
		Recoil2(players);
	}

	if (Menu.autoAim) {
		
		if (Menu.RSC) {
			Menu.RSC = !Menu.RSC;
		}
		if (aim_index) {
			if (GetAsyncKeyState(VK_XBUTTON2)==KeyDown)
			{
				aimbot_players(players);
			}
		}
		else {
			if (get_open_mirror_state(players)) {
				aimbot_players(players);
			};
		}

	}
	if (Menu.SuperJump) {
		
		SuperJump();
	}
	if (Menu.Glow_enemy ) {
		draw_menu();
	}
	if (Menu.Glow_team)
	{
		glow_plus();
		//;Light enhanced version, increased visual judgment, but the YES map parser is not great, there are some bugs do not use
		glow_plus();
		glow_plus();
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


void start_cheats_csgo()
{
	initialize_address("csgo.exe");//
	
	g_cheating = cheats_doing;

	hwnd game_hwnd = FindWindowA(nullptr, "Counter-Strike: Global Offensive");//
	hwnd transparent_hwnd = create_transparent_window(game_hwnd);//Transparent window handle
	
	g_game_hwnd = game_hwnd;
	g_transparent_hwnd = transparent_hwnd;
	
	initialize_direct3d9(transparent_hwnd);

	
	
	message_handle(game_hwnd, transparent_hwnd);

}





