# PythonApplication1.py : Copyright(C) 2021 https://www.youtube.com/channel/UC6rB-zszkYqehnOYuKumrFg
import ctypes
user32 = ctypes.WinDLL("user32")
user32.MessageBoxW.argtypes = \
[ ctypes.c_void_p   # HWND    hWnd     
, ctypes.c_wchar_p  # LPCWSTR lpText   
, ctypes.c_wchar_p  # LPCWSTR lpCaption
, ctypes.c_uint32   # UINT    uType    
]
user32.MessageBoxW \
( None   
, 'メッセージ'
, 'タイトル'
, 0
)
