#include <stdio.h>
#include <stdlib.h>

int main()

{int Nota;
    puts("Este program visualiza si la nota es Alta o Baja \n");
    puts("Digite el valor\n");
    scanf("%d",&Nota);
    if(Nota>=100)
        printf("Alta");
    else
        printf("Baja");
return 0;}
