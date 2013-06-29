#include <stdio.h>
#include <stdlib.h>

int main()
{
    int minutos,segundos;
    printf("Este programa convierte segundos a minutos con segundos\n");
    printf("Digite el valor de segundos:\n");
    scanf("%d",&segundos);
    minutos = segundos;
    segundos= segundos / 60;
    minutos= minutos % 60;
    printf("%dm %ds\n",segundos, minutos);
    return 0;
}
