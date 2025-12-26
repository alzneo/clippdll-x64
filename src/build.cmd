cl /O1 /MD /GS- ClippDll.c /link user32.lib /dll /out:ClippDll.dll /opt:ref /opt:icf &&^
cl /O1 /MD test.c /link ClippDll.lib /out:test.exe /opt:ref /opt:icf