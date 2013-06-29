#include <stdio.h>
#include <stdlib.h>

int main()
{
    float masa , E, c = 2.997925 ;
    printf("Este programa lee la masa en gramos y obtiene la energia.\n");
    printf("Digite el valor de masa\n");
    scanf("%f",&masa);
    E= masa * c * c;
    printf("La energia producida es: %.2f",E);
    return 0;
}
