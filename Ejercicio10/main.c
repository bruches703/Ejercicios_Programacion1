#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int impares=0;

    for(int i=0;i<5;i++)
    {
    printf("Ingrese numero: ");
    scanf("%d",&num);
        if(num%2==1)
        {
            impares++;
        }
    }
    printf("Impares son: %d", impares);
}
