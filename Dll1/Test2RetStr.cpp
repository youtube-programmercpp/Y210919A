// Test2RetStr.cpp : Copyright(C) 2021 https://www.youtube.com/channel/UC6rB-zszkYqehnOYuKumrFg
#include "pch.h"
#include "Dll1.h"
extern "C" DLL1_API const wchar_t* __stdcall Test2RetStr()
{
	return L"���̕������" __FUNCTION__ "�֐����Ԃ��܂����B";
}
