

#pragma once

#include "direct3d9.hpp"
#include <iostream>
#include "offset.h"


//获取鼠标左键按下状态
bool get_mouse_left_down()
{
	//获取异步的按键信息
	return GetAsyncKeyState(VK_LBUTTON) & 0x8000;
}
//监听键盘0号键按下的状态
int get_key_state() {
	if (GetAsyncKeyState(VK_NUMPAD1) & 0x8000) {
		return 1;
	}
	else if (GetAsyncKeyState(VK_NUMPAD2) & 0x8000) {
		return 2;
	}
	else if (GetAsyncKeyState(VK_NUMPAD3) & 0x8000) {
		return 3;
	}
	else if (GetAsyncKeyState(VK_NUMPAD4) & 0x8000) {
		return 4;
	}
	else if (GetAsyncKeyState(VK_NUMPAD5) & 0x8000) {
		return 5;
	}
	else if (GetAsyncKeyState(VK_NUMPAD6) & 0x8000) {
		return 6;
	}
	else if (GetAsyncKeyState(VK_NUMPAD7) & 0x8000) {
		return 7;
	}
	else if (GetAsyncKeyState(VK_NUMPAD8) & 0x8000) {
		return 8;
	}
	else if (GetAsyncKeyState(VK_NUMPAD9) & 0x8000) {
		return 9;
	}
	return 0;
}
//转化为矩阵信息
bool to_rect_info(float matrix[][4], float* location, int window_width, int window_heigt, int& x, int& y, int& w, int& h)
{
	float to_target = matrix[2][0] * location[0]
		+ matrix[2][1] * location[1]
		+ matrix[2][2] * location[2]
		+ matrix[2][3];
	if (to_target < 0.01f)//如果敌人在后面就不进行转换
	{
		x = y = w = h = 0;
		return false;
	}
	to_target = 1.0f / to_target;

	//矩阵计算
	float to_width = window_width + (matrix[0][0] * location[0]
		+ matrix[0][1] * location[1]
		+ matrix[0][2] * location[2]
		+ matrix[0][3]) * to_target * window_width;

	float to_height_h = window_heigt - (matrix[1][0] * location[0]
		+ matrix[1][1] * location[1]
		+ matrix[1][2] * (location[2] + 75.0f)
		+ matrix[1][3]) * to_target * window_heigt;

	float to_height_w = window_heigt - (matrix[1][0] * location[0]
		+ matrix[1][1] * location[1]
		+ matrix[1][2] * (location[2] - 5.0f)
		+ matrix[1][3]) * to_target * window_heigt;

	x = (int)(to_width - (to_height_w - to_height_h) / 4.0f);
	y = (int)(to_height_h);
	w = (int)((to_height_w - to_height_h) / 2.0f);
	h = (int)(to_height_w - to_height_h);
	return true;
}

//计算自瞄距离
int get_aimbot_len(int window_w, int window_h, int x, int y)
{
	//勾股定理
	int temp_x = abs(window_w - x);
	int temp_y = abs(window_h - y);
	return (int)sqrt((temp_x * temp_x) + (temp_y * temp_y));
}



//绘制血量
void render_player_blood(float blood, int x, int y, int h)
{
	float value = blood / 100.0f * h;
	render_line(D3DCOLOR_XRGB(221, 0, 27), x, y, x, y + value);
}


//绘制指示线
void render_underline(D3DCOLOR color, int window_w, int window_h, int x, int y)
{
	render_line(color, x, y, window_w, window_h * 2);
}