#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    int num2;
    int resultado;

    system("cls");
    printf("Ingrese primer numero: ");
    scanf("%d",&num1);
    printf("Ingrese segundo numero: ");
    scanf("%d",&num2);

    resultado=num1-num2;

    if(resultado<0)
    {
        printf("\nResultado negativo");
    }
    else
    {
        printf("\nResultado positivo");
    }
    return 0;
}
