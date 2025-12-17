#include <stdio.h>
#include <windows.h>

__declspec(dllimport) LPSTR CopyFromClipp();

int main()
{
    LPSTR result = CopyFromClipp();
    printf("%s", result);
}