#include <stdio.h>

int main(){
    char Caracter;
    printf("Este programa determina el caracter asociado a un codigo introducido por el usuario\n");
    printf ("Digite un car%ccter.\n",160);
    scanf("%c", &Caracter);

    (Caracter>47 && Caracter<58)? printf("Es un d%cgito",161):puts("") ;

    ((Caracter>64 && Caracter<91)|| (Caracter>96 && Caracter<123))? printf("Es un car%ccter alfab%ctico",160,130): puts("");

    ((Caracter>42 && Caracter<48)||(Caracter==58||Caracter==59))? printf("Es un car%ccter de puntuaci%cn",160,162):puts("") ;


    return 0;}

