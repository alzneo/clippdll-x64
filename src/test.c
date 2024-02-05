#include <windows.h>

__declspec(dllimport) LPSTR CopyFromClipp();

void main()
{
    LPSTR result = CopyFromClipp();
    printf("%s", result);
}