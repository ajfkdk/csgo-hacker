#pragma once

#define _CRT_SECURE_NO_WARNINGS
#define DEBUG_STRING

#include <Windows.h>
#include <TlHelp32.h>
#include <Psapi.h>

#ifdef DEBUG_STRING
#include <stdio.h>
#endif // DEBUG_STRING

using handle = HANDLE;
using hwnd = HWND;
using dword = DWORD;
using hmodule = HMODULE;
using hresult = HRESULT;

void error(bool state, const char* text = nullptr)
{
	if (state) return;

	char buffer[4000];
	ZeroMemory(buffer, 4000);
	wsprintf(buffer, "�������� : %s", text);

#ifdef  DEBUG_STRING
	
#endif

	MessageBox(nullptr, buffer, nullptr, MB_OK);
	exit(-1);
}

void warning(const char* text, bool state = false)
{
	if (state) return;

	char buffer[5000];
	ZeroMemory(buffer, 5000);
	wsprintf(buffer, "���� : %s", text);

#ifdef DEBUG_STRING
	
#endif // DEBUG_STRING

	MessageBox(nullptr, buffer, nullptr, MB_OK);
}

struct module_information
{
	
	handle module_handle;
	char module_name[1024];
	char* module_data;
	int module_address;
	int module_size;
	void alloc(int size)
	{
		module_size = size;
		module_data = (char*)VirtualAlloc(nullptr, size, MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);
		error(module_data, "�����ڴ�ʧ��");
	}
	void release()
	{
		if (module_data) VirtualFree(module_data, 0, MEM_RELEASE);
		module_data = nullptr;
	}
};

dword read_memory(handle process, int address, void* recv, int size)
{
	dword read_size;
	ReadProcessMemory(process, (LPCVOID)address, recv, size, &read_size);
	return read_size;
}

dword write_memory(handle process,int address,void* data,int size)
{
	dword write_size;
	WriteProcessMemory(process, (LPVOID)address, data, size, &write_size);
	return write_size;
}

void* alloc_memory(int size)
{
	return VirtualAlloc(nullptr, size, MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);
}

void free_memory(void* ptr)
{
	if(ptr)VirtualFree(ptr, 0, MEM_RELEASE);
	ptr = nullptr;
}

handle get_process_handle(dword process_id, dword access = PROCESS_ALL_ACCESS)
{
	handle process_handle = OpenProcess(access, FALSE, process_id);
	error(process_handle, "�򿪽��̾��ʧ��");
	

	return process_handle;
}
void print_pic() {
	float y, x, z, f;
	for (y = 1.5f; y > -1.5f; y -= 0.1f)
	{
		for (x = -1.5f; x < 1.5f; x += 0.05f)
		{
			z = x * x + y * y - 1;
			f = z * z * z - x * x * y * y * y;
			putchar(f <= 0.0f ? ".:-=+*#%@"[(int)(f * -8.0f)] : ' ');
		}
		putchar('\n');
	}
}
dword get_process_id(const char* process_name)
{
	handle snap = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
	error(snap != INVALID_HANDLE_VALUE, "CreateToolhelp32Snapshotʧ��");

	PROCESSENTRY32 process_info;
	ZeroMemory(&process_info, sizeof(process_info));
	process_info.dwSize = sizeof(process_info);

	char target[1024];
	ZeroMemory(target, 1024);
	strncpy(target, process_name, strlen(process_name));
	_strupr(target);

	BOOL state = Process32First(snap, &process_info);
	while (state)
	{
		if (strncmp(_strupr(process_info.szExeFile), target, strlen(target)) == 0)
		{
#ifdef DEBUG_STRING
			
#endif // DEBUG_STRING

			print_pic();
			
			printf("welcom CSGO Cheater program\n\n\n                                      -------char_Tea_driner\n\n\n\n\n");
			CloseHandle(snap);
			return process_info.th32ProcessID;
		}
		state = Process32Next(snap, &process_info);
	}

	CloseHandle(snap);
	warning("���̲���ʧ��!");
	return 0;
}

void get_module_info(handle process_handle, dword process_id, const char* module_name, struct module_information& info)
{
	handle snap = CreateToolhelp32Snapshot(TH32CS_SNAPMODULE, process_id);
	error(snap != INVALID_HANDLE_VALUE, "CreateToolhelp32Snapshotʧ��");

	MODULEENTRY32 module_info;
	ZeroMemory(&module_info, sizeof(module_info));
	module_info.dwSize = sizeof(module_info);

	char target[1024];
	ZeroMemory(target, 1024);
	strncpy(target, module_name, strlen(module_name));
	_strupr(target);

	BOOL state = Module32First(snap, &module_info);
	while (state)
	{
		if (strncmp(_strupr(module_info.szModule), target, strlen(target)) == 0)
		{
			info.module_address = (int)module_info.modBaseAddr;
			info.module_handle = module_info.hModule;
			info.alloc(module_info.modBaseSize);
			ZeroMemory(info.module_name, sizeof(info.module_name));
			strncpy(info.module_name, module_info.szModule, strlen(module_info.szModule));

			dword size = read_memory(process_handle, info.module_address, info.module_data, info.module_size);
			error(size, "��ȡ�ڴ����");

#ifdef DEBUG_STRING
			
			
#endif // DEBUG_STRING

			CloseHandle(snap);
			return;
		}
		state = Module32Next(snap, &module_info);
	}

	CloseHandle(snap);
	warning("!!!���Ҳ���ָ��ģ��!!!");
}

int find_pattern(handle process, struct module_information& module, const char* pattern, int index = 0, int offset = 0)
{
	const char* start = module.module_data + offset;
	const int length = strlen(pattern);

	int count = 0;
	for (int i = 0; i < module.module_size - offset; i++)
	{
		if (start[i] == pattern[0] || pattern[0] == '?')
		{
			int j = 1;
			for (; j < length; j++) if (start[i + j] != pattern[j] && pattern[j] != '?') break;
			if (j == length && count++ == index) return module.module_address + i + offset;
		}
	}

	warning("!!!�޷�ƥ�䵽���ڴ�����!!!");
	return -1;
}

//void show_all_pattern(handle process, struct module_information& module, const char* pattern, int offset = 0)
//{
//	const char* start = module.module_data + offset;
//	const int length = strlen(pattern);
//
//	int count = 0;
//	for (int i = 0; i < module.module_size - offset; i++)
//	{
//		if (start[i] == pattern[0] || pattern[0] == '?')
//		{
//			int j = 1;
//			for (; j < length; j++) if (start[i + j] != pattern[j] && pattern[j] != '?') break;
//			if (j == length) printf("address : %8x \n", module.module_address + i + offset);
//		}
//	}
//
//}


