#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("Ingresa el numero: ");
    scanf("%d", &num);
        if(num%2==0)
        {
            printf("\nEl numero %d es par", num);
        }
        else
        {
            printf("\n El numero %d es impar", num);
        }
    return 0;
}
