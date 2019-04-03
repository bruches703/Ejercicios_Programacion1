#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letra;
    int contadorA=0;
    int contadorEIOU=0;


    for(int i=0;i<3;i++)
    {
        printf("Ingresa un caracter: ");
        fflush(stdin);
        scanf("%c", &letra);

        if(letra=='a')
        {
            contadorA++;
        }
        else
        {
            contadorEIOU++;
        }

    }
    printf("\nHay %d letras 'a' ingresadas", contadorA);
    printf("\nHay %d e,i,o,u ingresados",contadorEIOU);
    return 0;
}
