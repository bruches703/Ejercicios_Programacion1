#include <stdio.h>
#include <stdlib.h>

int main()
{   int num1;
    int num2;
    int producto=0;
    int cuadrado;

    system("cls");
    printf("Ingrese primer numero: ");
    scanf("%d", &num1);
        while(num1<=0)
        {
            printf("El numero no puede ser 0 o menor.\nIngrese primer numero: ");
            scanf("%d", &num1);
        }

    printf("\nIngrese segundo numero: ");
    scanf("%d", &num2);
    while(num2<=0)
        {
            printf("El numero no puede ser 0 o menor.\nIngrese primer numero: ");
            scanf("%d", &num2);
        }
    producto=num1*num2;
    cuadrado=num1*num1;
    system("cls");

    printf("\nEl producto es %d", producto);
    printf("\nEl cuadrado del primer numero es: %d",cuadrado);
}
