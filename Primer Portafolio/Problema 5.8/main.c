#include <stdio.h>
#include <stdlib.h>

int main()
{

    int year;
    printf("Este programa determina si un a%co es bisiesto\n",164);
    printf("Digite el valor de a%co\n",164);
    scanf("%d",&year);
     if(year%4 == 0)
    {
        printf("Es un a%co bisiesto\n",164);
    }
    else
    {
        printf("No es un a%co bisiesto\n",164);
    }
    if(year%100 == 0)
    {
        if(year%400 == 0)
        {
            printf("Es un a%co bisiesto \n",164);

        }
        else
        {
            printf("No es un a%co bisiesto! \n",164);
        }
    }

    return 0;
}
