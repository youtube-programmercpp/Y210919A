// Dll1.h : Copyright(C) 2021 https://www.youtube.com/channel/UC6rB-zszkYqehnOYuKumrFg
#pragma once
#ifdef DLL1_EXPORTS
#include <string>
typedef std::wstring Test3StrObj;
#	define	DLL1_API __declspec(dllexport) 
#else
typedef struct Test3StrObj Test3StrObj;
#	define	DLL1_API __declspec(dllimport) 
#endif
#ifdef __cplusplus
extern "C" {
#else
#include <wchar.h>
#endif
DLL1_API int            __stdcall Test1IntAdd      (      int a         , int b           );
DLL1_API const wchar_t* __stdcall Test2RetStr      (                                      );
DLL1_API Test3StrObj*   __stdcall Test3StrObjNew   (                                      );
DLL1_API void           __stdcall Test3StrObjDelete(      Test3StrObj* p                  );
DLL1_API const wchar_t* __stdcall Test3StrObjPeek  (const Test3StrObj* p                  );
DLL1_API int            __stdcall Test3StrObjAppend(      Test3StrObj* p, const wchar_t* s);
#ifdef __cplusplus
}
#endif
