#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int pares=0;

    for(int i=0;i<5;i++)
    {
    printf("Ingrese numero: ");
    scanf("%d",&num);
        if(num%2==0)
        {
            pares++;
        }
    }
    printf("Impares son: %d", pares);
}
