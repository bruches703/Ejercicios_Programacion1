#include <stdio.h>
#include <stdlib.h>

int main()
{
    int flag=0;
    int max=0;
    int min=0;
    int num;


    for(int i=0;i<5;i++)
    {
        printf("Ingrese numero: ");
        scanf("%d",&num);

            if(num>=max || flag==0)
            {
                max=num;
            }

            if(num<=min || flag==0)
            {
                min=num;
                flag=1;
            }

    }
    printf("\nEl valor maximo es: %d", max);
    printf("\nEl valor minimo es: %d", min);
}
