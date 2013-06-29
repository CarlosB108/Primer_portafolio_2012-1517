#include <stdio.h>
#include <stdlib.h>

int main()
{
 float Radio , Area , Diametro , Longitud, PI = 3.1416;
 printf("Este programa lee el radio de un circulo y despues visualiza el area ,diametro y longitud de la circunferencia del circulo.\n");
    printf("Digite el valor del radio: \n");
    scanf("%f", &Radio);
    Area = PI * Radio * Radio;
    Diametro = Radio * 2;
    Longitud = 2 * Radio * PI;
    printf("El area del circulo es: %.1fcm\n",Area);
    printf("El diametro circulo es: %.1fcm\n",Diametro);
    printf("La longitud de la circunferencia de un circulo es: %.1fcm\n", Longitud);
    return 0;
}
