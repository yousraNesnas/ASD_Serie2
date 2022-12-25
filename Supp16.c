/*Ecrire un algorithme qui détermine le quotient de la division
d’un nombre entier A par un nombre entier B.*/

#include <stdio.h>

int main()
{
    int a, b;
    float resultat;

    printf("Donnez un nombre entier A SVP!\n");
    scanf("%d", &a);

    printf("Donnez un nombre entier B SVP!\n");
    scanf("%d", &b);

    resultat = a / b;

    printf(" resultat entier :  %d / %d = %.0f", a, b, resultat);

    resultat = (float)a / (float)b;

    printf("\n resultat precis : %d / %d = %.2f", a, b, resultat);

    // en utilisant les boucles:
    resultat = 0;

    while (a >= b)
    {
        a = a - b;
        resultat = resultat + 1;
    }

    printf("\n resultat avec boucles = %.0f", resultat);
}