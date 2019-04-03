#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    int cuadrado;

    printf("Ingrese el numero: ");
    scanf("%d", &num1);
        while(num1<=0)
        {
            printf("Error, el numero no puede ser cero o menor");
            printf("Ingrese el numero: ");
            scanf("%d", &num1);
        }
    cuadrado=num1*num1;

    printf("\nEl cuadrado del numero ingrado es: %d",cuadrado);
    return 0;
}
