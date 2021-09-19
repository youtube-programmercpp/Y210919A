# PythonApplication3.py : Copyright(C) 2021 https://www.youtube.com/channel/UC6rB-zszkYqehnOYuKumrFg
import ctypes
Dll1 = ctypes.WinDLL("Dll1.dll")
Dll1.Test3StrObjNew   .argtypes = [                                 ]
Dll1.Test3StrObjAppend.argtypes = [ctypes.c_void_p, ctypes.c_wchar_p]
Dll1.Test3StrObjPeek  .argtypes = [ctypes.c_void_p                  ]
Dll1.Test3StrObjDelete.argtypes = [ctypes.c_void_p                  ]
Dll1.Test3StrObjNew   .restype  =  ctypes.c_void_p                   
Dll1.Test3StrObjAppend.restype  =  ctypes.c_int                      
Dll1.Test3StrObjPeek  .restype  =  ctypes.c_wchar_p                  
Dll1.Test3StrObjDelete.restype  =  ctypes.c_wchar_p                  
p = Dll1.Test3StrObjNew()
Dll1.Test3StrObjAppend(p,   "Alpha")
Dll1.Test3StrObjAppend(p, ", Beta" )
Dll1.Test3StrObjAppend(p, ", Gamma")
Dll1.Test3StrObjAppend(p, ", Delta")
print(Dll1.Test3StrObjPeek(p))
Dll1.Test3StrObjDelete(p)
