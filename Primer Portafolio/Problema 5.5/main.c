#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ano;
    printf("Este programa cambia un a%co escrito en cifras arabigas a n%cmeros romanos.\n",164,163);
    do
    {
        printf("Digite el a%co\n",164);
        scanf("%d", &ano);
    }while (ano >= 2000);

switch((ano/1000)%10)
{
    case 1:
        printf("M");
        break;
    case 2:
        printf("MM");
        break;
    case 3:
        printf("MMM");
        break;
    case 4:
        printf("IV");
        break;
    case 5:
        printf("V");
        break;
    case 6:
        printf("VI");
        break;
    case 7:
        printf("VII");
        break;
    case 8:
        printf("VIII");
        break;
    case 9:
        printf("IX");
        break;
}
switch((ano/100)%10)
{
    case 1:
        printf("C");
        break;
    case 2:
        printf("CC");
        break;
    case 3:
        printf("CCC");
        break;
    case 4:
        printf("CD");
        break;
    case 5:
        printf("D");
        break;
    case 6:
        printf("DC");
        break;
    case 7:
        printf("DCC");
        break;
    case 8:
        printf("DCCC");
        break;
    case 9:
        printf("CM");
        break;
}
switch((ano/10)%10)
{
    case 1:
        printf("X");
        break;
    case 2:
        printf("XX");
        break;
    case 3:
        printf("XXX");
        break;
    case 4:
        printf("XL");
        break;
    case 5:
        printf("L");
        break;
    case 6:
        printf("LX");
        break;
    case 7:
        printf("LXX");
        break;
    case 8:
        printf("LXXX");
        break;
    case 9:
        printf("XC");
        break;
}
switch((ano%10)%10)
{
    case 1:
        printf("I");
        break;
    case 2:
        printf("II");
        break;
    case 3:
        printf("III");
        break;
    case 4:
        printf("IV");
        break;
    case 5:
        printf("V");
        break;
    case 6:
        printf("VI");
        break;
    case 7:
        printf("VII");
        break;
    case 8:
        printf("VIII");
        break;
    case 9:
        printf("IX");
        break;
       }

    return 0;
}
