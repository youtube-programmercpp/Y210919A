// Test1.c : Copyright(C) 2021 https://www.youtube.com/channel/UC6rB-zszkYqehnOYuKumrFg
#include "../Dll1/Dll1.h"
#include <stdio.h>
void Test1()
{
	puts("********** " __FUNCTION__ " **********");
	printf("%d\n" , Test1IntAdd(1, 2));
	printf("%ws\n", Test2RetStr(    ));
	Test3StrObj* const p = Test3StrObjNew();
	if (p) {
		Test3StrObjAppend(p,   L"Alpha");
		Test3StrObjAppend(p, L", Beta" );
		Test3StrObjAppend(p, L", Gamma");
		Test3StrObjAppend(p, L", Delta");
		printf("%ws\n", Test3StrObjPeek(p));
		Test3StrObjDelete(p);
	}
}
