#include <windows.h>
#include <winuser.h>
#include <stdio.h>

__declspec(dllexport) LPSTR CopyFromClipp()
{
    LPSTR result;

    if (OpenClipboard(NULL))
    {
        HGLOBAL hClipData = GetClipboardData(CF_TEXT);
        if (hClipData)
        {
            LPSTR lpClipBuf = GlobalLock(hClipData);
            if (lpClipBuf)
            {
                result = "";
                sprintf(result, "%s", hClipData);
            }
            GlobalUnlock(hClipData);
        }
        CloseClipboard();
    }
    return result;
}