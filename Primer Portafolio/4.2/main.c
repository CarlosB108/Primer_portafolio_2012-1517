#include <stdio.h>
#include <stdlib.h>

int main()
// Este es un programa que te da el resultado de cada expresion
{
    printf("Respuestas de cada expresion:\n");

    int a = 15 * 14 - 3  * 7;
    printf("a) %d\n", a);
    int b = -4 * 5 * 2;
    printf("b) %d\n", b);
    int c = (24 + 2 * 6) / 4;
    printf("c) %d\n", c);
    int d = a / a / a * b;
    printf("d) %d\n", d);
    int e = 3 + 4 * 8 * 4 - 9 + 3 / 6;
    printf("e) %d\n", e);
    int f = 4 * 3 * 5 + 8 * 4 * 2 - 5;
    printf("f) %d\n", f);
    int g = 4 - 40 / 5;
    printf("g) %d\n", g);
    int h = -5 % -2;
    printf("h) %d\n", h);
    return 0;

}
