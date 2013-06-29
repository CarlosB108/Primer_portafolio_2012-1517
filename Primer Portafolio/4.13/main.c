#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159
int main()

{
    float area ,circunferencia, radio;
    printf("Programa para calcular  la longitud de la circunferencia y el area del circulo para un radio introducido por el teclado.\n");

    printf("Digite el valor de radio:\n");
    scanf("%f",&radio);
    circunferencia = 2 * PI * radio;
    area= PI * pow(radio, 2);
    printf("\n Circunferencia= %f area =%f", circunferencia,area);
    return 0;
}
