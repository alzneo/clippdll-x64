cl ClippDll.c /link user32.lib /dll /out:ClippDll.dll
cl test.c /link ClippDll.lib /out:test.exe