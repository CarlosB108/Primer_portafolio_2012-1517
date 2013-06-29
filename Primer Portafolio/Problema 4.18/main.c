#include <stdio.h>
#include <stdlib.h>
int main()
{
    int Hora, Minuto;
        printf("Este programa lee la hora de un dia en notaci%cn de 24 horas y da respuesta en notaci%cn de 12 horas\n",162,162);
        printf("Digite una hora en notacion de 24 horas:\n");
        scanf("%d", &Hora);
        printf("Introduzca los minutos (menor que 60):\n");
        scanf("%d", &Minuto);
    if(Hora == 24)
        printf("La hora es: %d:%d A.M.\n", Hora-12, Minuto);
    else if(Hora == 12)
        printf("La hora es: %d:%d P.M.\n", Hora, Minuto);
    else if(Hora > 12 && Hora <= 23)
        printf("La hora es: %d:%d P.M.\n", Hora-12, Minuto);
    else
        printf("La hora es: %d:%d A.M.\n", Hora, Minuto);
    return 0;
}
