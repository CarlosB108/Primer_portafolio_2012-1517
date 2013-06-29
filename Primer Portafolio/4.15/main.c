#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number1 , number2, number3;
    printf("Este programa lee tres enteros y verifica si estan en orden numerico\n");

    printf("Digite el valor de number1");
    scanf("%d", &number1);
    printf("Digite el valor de number2");
    scanf("%d", &number2);
    printf("Digite el valor de number3");
    scanf("%d", &number3);

{

    if(number1 < number2)
    {
        if(number2<number3)
            printf("Los numeros si estan en orden numericos\n");
            else
                printf("No estan ordenados");
    }
        else printf("Los numeros no estan en orden numerico\n");
}



    return 0;
}
