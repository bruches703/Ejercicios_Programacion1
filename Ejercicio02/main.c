#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    int num2;
    int suma;

    printf("Ingrese primer numero: ");
    scanf("%d", &num1);
    printf("Ingrese segundo numero: ");
    scanf("%d", &num2);

    suma=num1+num2;

    printf("\nLa suma es: %d", suma);
    return 0;
}
