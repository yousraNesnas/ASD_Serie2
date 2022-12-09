/*Écrire un algorithme qui détermine le PGCD de deux nombres*/
#include <stdio.h>

int main()
{

    int a, b, PGCD;

    printf("Entrez deux entiers a et b: \n");
    scanf("%d %d", &a, &b);

    for (int i = 1; i <= a && i <= b; ++i)
    {
        if (a % i == 0 && b % i == 0)
            PGCD = i;
    }

    printf("PGCD de %d et %d = %d\n", a, b, PGCD);

    // sans modulo
    while (a != b)
    {
        if (a > b)
        { 
            a = a - b;
        }
        else
        { 
            b = b - a;
        }
    }

    printf(" PGCD = %d\n", a);

    return 0;
}