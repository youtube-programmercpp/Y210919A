// Test1IntAdd.cpp : Copyright(C) 2021 https://www.youtube.com/channel/UC6rB-zszkYqehnOYuKumrFg
#include "pch.h"
#include "Dll1.h"
extern "C" DLL1_API int __stdcall Test1IntAdd(int a, int b)
{
	return a + b;
}
