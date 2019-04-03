#include <stdio.h>
#include <stdlib.h>

int main()
{
    int altura;
    int base;
    float area;

    printf("Ingrese base: ");
    scanf("%d", &base);
    printf("Intrese altura: ");
    scanf("%d", &altura);

    area=(float)base*altura/2;

    printf("\nEl area del triangulo es: %.2f", area);

    return 0;
}
