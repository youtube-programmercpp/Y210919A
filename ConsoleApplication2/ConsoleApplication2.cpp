// ConsoleApplication2.cpp : Copyright(C) 2021 https://www.youtube.com/channel/UC6rB-zszkYqehnOYuKumrFg
#include "../Dll1/Dll1.h"
#include <Windows.h>
#define	CppGetProcAddress(hModule, lpProcName)	reinterpret_cast<decltype(::lpProcName)*>(GetProcAddress(hModule, #lpProcName))
#define	CppLoadLibraryA(lpLibFileName        )	reinterpret_cast<::lpLibFileName*>(LoadLibraryA(#lpLibFileName))
#include <locale.h>
#include <iostream>
#include <memory>
struct Dll1 {
	Dll1() = delete;
	~Dll1() = delete;
#define	DeclareProperty(name) decltype(::name)* get_##name() const { return CppGetProcAddress(HMODULE(this), name);} __declspec(property(get=get_##name)) decltype(::name)* name
	DeclareProperty(Test1IntAdd      );
	DeclareProperty(Test2RetStr      );
	DeclareProperty(Test3StrObjNew   );
	DeclareProperty(Test3StrObjDelete);
	DeclareProperty(Test3StrObjPeek  );
	DeclareProperty(Test3StrObjAppend);
#undef DeclareProperty
	struct Deleter {
		void operator()(Dll1* hModule) const
		{
			FreeLibrary(HMODULE(hModule));
		}
	};
};
int main()
{
	setlocale(LC_ALL, "");
	if (const auto Dll1 = std::unique_ptr<::Dll1, ::Dll1::Deleter>(CppLoadLibraryA(Dll1))) {
		const auto p = Dll1->Test3StrObjNew();
		if (p) {
			const auto Test3StrObjAppend = Dll1->Test3StrObjAppend;
			Test3StrObjAppend(p,   L"Alpha");
			Test3StrObjAppend(p, L", Beta" );
			Test3StrObjAppend(p, L", Gamma");
			Test3StrObjAppend(p, L", Delta");
		}
		std::cout
			<< Dll1->Test1IntAdd    (1, 2) << '\n'
			<< Dll1->Test2RetStr    (    ) << '\n'
			<< Dll1->Test3StrObjPeek(p   ) << '\n'
			;
		Dll1->Test3StrObjDelete(p);
	}
}
