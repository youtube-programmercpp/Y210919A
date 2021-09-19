#ifdef _DEBUG
#	define	Configuration	"Debug"
#else
#	define	Configuration	"Release"
#endif
#ifdef _WIN64
#	define	Platform	"x64"
#else
#	define	Platform	"."
#endif
#pragma comment(lib, "../" Platform "/" Configuration "/Dll1.lib")
#include <locale.h>
#include <iostream>
extern "C" void Test1();
extern "C" void Test2();
int main()
{
	setlocale(LC_ALL, "");
	Test1();
	Test2();
}
