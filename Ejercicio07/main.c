#include <stdio.h>
#include <stdlib.h>

int main()
{
    int radio;
    float longitud;
    float area;
    float pi=3.14;

    printf("Ingrese el radio del cirulo: ");
    scanf("%d", &radio);

    longitud=(float)radio*2*pi;
    area=(float)pi*radio*radio;

    printf("\nLa longitud es de: %.2f", longitud);
    printf("\nEl area es: %.2f", area);

    return 0;
}
