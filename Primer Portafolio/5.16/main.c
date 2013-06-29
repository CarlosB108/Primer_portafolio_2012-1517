#include <stdio.h>
#include <stdlib.h>

int main()
{float a;
printf("Este programa escribe la calificaci%cn correspondiente a una nota.\n",162);
printf("Digite el valor de la nota:\n");
scanf("%f", &a);

if(a>=0 && a<5)
    printf("Suspenso");

if(a>=5 && a<6.5)
    printf("Aprovado");

if(a>=6.5 && a<8.5)
    printf("Notable");

if(a>=8.5 && a<10)
    printf("Sobresaliente");

if (a == 10)
    printf("Matricula de honor");
    return 0;
}
