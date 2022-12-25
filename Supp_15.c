/*Ecrire un algorithme qui détermine la puissance nième d'un (n
entier quelconque) nombre a donné(i.e. : a^n).*/

#include <stdio.h>

int main()
{
    int a, n, resultat;

    printf("Donnez un nombre A SVP!\n");
    scanf("%d", &a);

    printf("Donnez un la puissance N SVP!\n");
    scanf("%d", &n);

    resultat = 1;
    for (int i = 0; i < n; i++)
    {
        resultat = resultat * a;
    }

    printf(" %d ^ %d = %d", a, n, resultat);
}