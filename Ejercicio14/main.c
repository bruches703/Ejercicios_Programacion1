#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    int suma=0;
    for(int i=0;i<99;i=i+3)
    {
        suma=suma+i;
        printf("%d\n6",i);
        Sleep(500);
    }
    printf("\nSuma: %d",suma);
}
