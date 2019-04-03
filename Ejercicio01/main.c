#include <stdio.h>
#include <stdlib.h>

int main()
{
    float media;
    int num;
    int suma=0;
    int i;
    for(i=0;i<5;i++)
    {
        printf("Ingrese numero: ");
        scanf("%d", &num);
        suma+=num;
    }
    media=(float)suma/i;
    printf("\nLa media de todos los numeros es: %.2f", media);
    return 0;
}
