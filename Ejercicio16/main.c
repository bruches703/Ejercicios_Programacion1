#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("Ingrese numero: ");
    scanf("%d",&num);
        if(num>=0)
        {
            printf("\nEl numero %d es positivo", num);
        }
        else
        {
            printf("\nEl numero %d es negativo", num);
        }
    return 0;
}
