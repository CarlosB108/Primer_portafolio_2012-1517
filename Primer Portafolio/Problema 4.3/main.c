#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float x,y,a, b, c ,d ,e ,f;
    printf("Este programa resuelve varios sitemas de ecuaciones lineales.\n");
    printf("Digitando 6 numeros a cada variable.\n Que nesecite la formula.\n");
    printf("Digite el valor de a\n");
    scanf("%f", &a);
    printf("Digite el valor de b\n");
    scanf("%f", &b);
    printf("Digite el valor de c\n");
    scanf("%f", &c);
    printf("Digite el valor de d\n");
    scanf("%f", &d);
    printf("Digite el valor de e\n");
    scanf("%f", &e);
    printf("Digite el valor de f\n");
    scanf("%f", &f);

    x = (c * e - b * f) / (a * e - b * d);
    y = (a * f - c * d) / (a * e - b * d);

    printf("EL valor de x = %f\n\n",x);
    printf("El valor de y = %f", y);
    return 0;
}
