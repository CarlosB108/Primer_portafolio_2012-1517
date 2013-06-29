#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number1, number2, true, false;
    printf("Este programa lee dos numeros y visualiza el mayor\n");

    printf("Digite el valor de numero1 \n");
    scanf("%d", &number1);

    printf("Digite el valor de numero2 \n ");
    scanf("%d", &number2);

    printf(("number1>number2")?"true":"false");

    return 0;
}
