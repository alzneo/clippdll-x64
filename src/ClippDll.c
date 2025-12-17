#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <winuser.h>


__declspec(dllexport) LPSTR CopyFromClipp() {
  LPSTR result = NULL;

  if (OpenClipboard(NULL)) {
    HGLOBAL hClipData = GetClipboardData(CF_TEXT);
    if (hClipData) {
      LPSTR lpClipBuf = GlobalLock(hClipData);
      if (lpClipBuf) {
        size_t len = strlen(lpClipBuf) + 1;
        result = (LPSTR)malloc(len);
        if (result) {
          memcpy(result, lpClipBuf, len);
        }
      }
      GlobalUnlock(hClipData);
    }
    CloseClipboard();
  }

  return result;
}
