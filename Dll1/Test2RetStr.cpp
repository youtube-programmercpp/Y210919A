// Test2RetStr.cpp : Copyright(C) 2021 https://www.youtube.com/channel/UC6rB-zszkYqehnOYuKumrFg
#include "pch.h"
#include "Dll1.h"
extern "C" DLL1_API const wchar_t* __stdcall Test2RetStr()
{
	return L"この文字列は" __FUNCTION__ "関数が返しました。";
}
