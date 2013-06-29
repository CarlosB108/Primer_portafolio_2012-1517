#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 0 , b = 0 , caracter;
    printf("Este programa es una calculadora simple.\n");
    printf("Digite el valor de a: \n");
    scanf("%d", &a);
    printf("Digite el valor de b \n");
    scanf("%d", &b);
    printf("Digite el valor del caracter, Suma(1), Resta(2), Multiplicacion(3), Division(4) y Residuo(5).\n");
    scanf("%d", &caracter);
    switch(caracter)
    {
        case 1: printf("La suma es: %d", a + b); break;
        case 2: printf("La resta es:%d", a - b); break;
        case 3: printf("La multiplicacion es: %d", a * b); break;
        case 4: printf("La division es: %d", a / b); break;
        case 5: printf("El residuo es: %d", a % b); break;
    }
    return 0;
}
