#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
   for(int i=1;i<100;i=i+2)
   {
      printf("%d\n",i);
      Sleep(1000);
   }
    return 0;
}
