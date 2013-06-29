#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dias,mes,anos,dias1,mes1,anos1,anosA, mesA,diaA;
    printf("Este programa calcula la edad de un individuo ya sea adulto o bebe.\n");
    printf ("Digite el dia de su nacimiento\n");
    scanf("%d",&dias);

    printf("Digite el mes de su naciemiento\n");
    scanf("%d",&mes);

    printf("Digite el a%co de su nacimiento\n",164);
    scanf("%d",&anos);

    printf ("Digite el dia actual\n");
    scanf("%d",&dias1);

    printf("Digite el mes actual\n");
    scanf("%d",&mes1);

    printf("Digite el ano actual\n");
    scanf("%d",&anos1);

    anosA =(anos1 - anos)- 1;
    if(anosA < 1)
    {
       printf("El bebe tiene %d meses y %d dias",mes1-mes,dias-dias1);
       return 0;

    }


    if(mes1 > mes)

        anosA++;
    else if(mes1 == mes && dias1 >= dias)
        anosA++;
        printf("El individuo tiene %d a%cos",anosA,164);




    return 0;}

