// Test2.cpp : Copyright(C) 2021 https://www.youtube.com/channel/UC6rB-zszkYqehnOYuKumrFg
#include "../Dll1/Dll1.h"
#include <iostream>
#include <stdexcept>
struct Test3StrObj {
	Test3StrObj() = delete;
	~Test3StrObj() = delete;
	Test3StrObj& operator+=(const wchar_t* s)
	{
		if (Test3StrObjAppend(this, s))
			return *this;
		else
			throw std::bad_alloc();
	}
	const wchar_t* Peek() const
	{
		return Test3StrObjPeek(this);
	}
};
#include <memory>
#include <string>
extern "C" void Test2()
{
	const std::unique_ptr<Test3StrObj, decltype(Test3StrObjDelete)*> p{ Test3StrObjNew(), Test3StrObjDelete };
	if (p) {
		*p +=   L"Alpha";
		*p += L", Beta" ;
		*p += L", Gamma";
		*p += L", Delta";
	}
	std::wcout
		<< "********** " __FUNCTION__ " **********\n"
		<< Test1IntAdd(1, 2) << '\n'
		<< Test2RetStr()     << '\n'
		<< p->Peek()         << '\n'
		;
}
