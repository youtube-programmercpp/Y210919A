# PythonApplication2.py : Copyright(C) 2021 https://www.youtube.com/channel/UC6rB-zszkYqehnOYuKumrFg
import ctypes
Dll1 = ctypes.WinDLL("Dll1.dll")

Dll1.Test1IntAdd.argtypes = \
[ ctypes.c_int  # int a
, ctypes.c_int  # int b
]
print(Dll1.Test1IntAdd(1, 2))

Dll1.Test2RetStr.argtypes = []
Dll1.Test2RetStr.restype = ctypes.c_wchar_p
print(Dll1.Test2RetStr())
