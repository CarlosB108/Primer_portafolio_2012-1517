#include <stdio.h>
#include <stdlib.h>

int main(){
    int ano, a,b,c,d,e,n;
  printf("Este programa nos da la fecha de domingo de Pascua\n");
  printf ("Digite el ano \n");
  scanf("%d",&ano);

        a= ano % 19;

        b= ano % 4;

        c= ano % 7;

        d= (19 * a + 24) % 30;

        e= (2 * b + 4 * c + 6* d + 5)% 5;

        n= (22 + d + e);

        (n<=31)? printf("El domingo de pascua de ese ano es el %d de marzo",n) : printf("El domingo de pascua de ese ano es el %d de abril",n-31) ;
    return 0;}
