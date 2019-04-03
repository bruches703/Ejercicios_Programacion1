#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int suma=0;
    int producto=1;
        for(int i=0;i<10;i++)
        {
             printf("Ingresa numero: ");
             scanf("%d",&num);
                while(num==0)
                {
                    printf("El numero no puede ser 0, reingrese: ");
                    scanf("%d",&num);
                }
                if(num>0)
                {
                    suma+=num;
                }
                else
                {
                    producto=producto*num;
                }
        }
    printf("\nLa suma de los positivos es: %d",suma);
    printf("\nEl producto de los negativos es: %d",producto);
    return 0;
}
