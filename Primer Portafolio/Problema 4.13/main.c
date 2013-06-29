#include <stdio.h>
#include <stdlib.h>

int main()
{

    int  Semana=0,Dia=0,Hora=0, Minuto=0 ,Segundo,Segundo1=0;
    printf("Este programa desglosa el valor que le des a los segundos para mostrarlos en Semanas , Dias ,Horas ,Minutos y Segundos.\n");
    printf("Digite el valor de segundos\n");
    scanf("%d",&Segundo);
    Semana = Segundo / 604800;

    Dia=(Segundo % 604800)/86400;

    Hora=(Segundo % 604800 % 86400)/ 3600;

    Minuto=((Segundo % 604800 % 86400)% 3600)/60;

    Segundo1=(((Segundo % 604800%86400)%3600)%60);

    printf("Semanas = %d\n", Semana);
    printf("Dias = %d\n",Dia);
    printf("%dh ",Hora);
    printf("%dm ",Minuto);
    printf("%ds ",Segundo1);

    return 0;
}
