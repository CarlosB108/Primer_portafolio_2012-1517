#include <stdio.h>
#include <stdlib.h>

int main()
{
    float longitud , anchura ;
    printf("Digite el valor de longitud: \n");
    scanf("%f" ,&longitud);
    printf("Digite el valor de anchura: \n");
    scanf("%f" ,&anchura);

    printf("  superficie = %.4f", longitud*anchura);
    return 0;
}
