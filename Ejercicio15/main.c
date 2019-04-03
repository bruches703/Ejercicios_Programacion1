#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    printf("Los multiplos de 6 son: ");
    for(int i=1;i<100;i++)
    {
        if(i%6==0)
        {
            printf("\n%d",i);
        }
        Sleep(100);
    }
}
