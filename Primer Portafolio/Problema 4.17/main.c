#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a,b,h;
    printf("Este programa lee la longitud de los lados y calcula la hipotenusa\n");
    printf("Digite el valor de a\n");
    scanf("%d",&a);
    printf("Digite el valor de b\n");
    scanf("%d",&b);

    h=sqrt((a * a + b * b));

   printf("El valor de hipotenusa = %d",h);
    return 0;
}
