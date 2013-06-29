#include <stdio.h>
#include <stdlib.h>

int main()
{
    float yardas,pulgadas,centimetros,metros,p;
        printf("Digite el valor de pie\n");
        scanf("%f",&p);

            yardas= p * 3;
                pulgadas= 12 + p;
                    centimetros= 2.54 * pulgadas;
                        metros = centimetros / 100;

        printf("yardas= %.2f\n",yardas);
        printf("pulgadas= %.2f\n", pulgadas);
        printf("centimetros= %.2fcm\n", centimetros);
        printf("metros =%.2fm\n",metros);

    return 0;
}
