// Test3StrObj.cpp : Copyright(C) 2021 https://www.youtube.com/channel/UC6rB-zszkYqehnOYuKumrFg
#include "pch.h"
#include "Dll1.h"
#include <exception>

extern "C" DLL1_API Test3StrObj* __stdcall Test3StrObjNew()
{
	try {
		return new std::wstring;
	}
	catch (const std::exception& e) {
#ifdef _DEBUG
		OutputDebugStringA(e.what());
		OutputDebugStringA("\n");
#endif
		return nullptr;
	}
}
extern "C" DLL1_API void __stdcall Test3StrObjDelete(Test3StrObj* p)
{
	delete p;
}
extern "C" DLL1_API const wchar_t* __stdcall Test3StrObjPeek(const Test3StrObj* p)
{
	if (p)
		return p->c_str();
	else
		return L"";
}
extern "C" DLL1_API int __stdcall Test3StrObjAppend(Test3StrObj* p, const wchar_t* s)
{
	try {
		p->append(s);
		return true;
	}
	catch (const std::exception& e) {
#ifdef _DEBUG
		OutputDebugStringA(e.what());
		OutputDebugStringA("\n");
#endif
		return false;
	}
}
