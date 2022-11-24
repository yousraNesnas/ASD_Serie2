/*Ecrire un algorithme qui détermine la puissance nième d'un (n
entier positif ou nul) nombre a donné(i.e. : a n).*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, n, puiss;
    int x;
    printf("Donner un nombre a\n");
    scanf("%d", &a);

    printf("Donner la puissance n\n");
    scanf("%d", &n);
    // l'exercice exige que n est un entier positif ou nul alors il faut ajouter une condition
    if (n >= 0)
    {
        printf("pour utiliser la fonction pow tapez 1, et 0 pour la boucle\n");
        scanf("%d", &x); //problem is here if i delete this one it works
        
        if (x==1)
        {
            puiss = pow(a, n);
        }
        else
        {
            puiss = 1;
            for (int i = 0; i < n; i++)
            {
                puiss = puiss * a;
            }
        }
    }
    else
    {
        printf("Donnez un nombre entier ou null!");
        return -1; // ceci arrete le programme et indique une erreur
    }
    printf("%d ^ %d = %d", a, n, puiss);
    return 0;
}
