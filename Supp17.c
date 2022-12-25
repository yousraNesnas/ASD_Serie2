/*Un nombre est dit parfait s’il est égal à la somme de ses
diviseurs en omettant le nombre lui même.
Exemple : six est un nombre parfait car : 6 = 1+2+3.
Ecrire un algorithme qui vérifie si un nombre est parfait*/

#include <stdio.h>

int main()
{
    int a, somme = 0;

    printf("Donnez un nombre entier A SVP!\n");
    scanf("%d", &a);

    for (int i = 1; i < a; i++)
    {
        if (a % i == 0)
        {
            somme = somme + i;
        }
    }

    if (somme == a)
    {
        printf("Le nombre %d est parfait",a);
    }
    else
    {
        printf("Le nombre %d est imparfait",a);
    }
}