/*Un nombre est dit premier s’il n’accepte comme diviseur que 1
et lui même.
Écrire un algorithme qui vérifie si un nombre est premier.*/

#include <stdio.h>

int main()
{
    // n est le nombre a divisé.&& c est le nombre de diviseurs.
    int n, c = 0, resultat;

    printf("Donnez un nombre n\n");
    scanf("%d", &n);

    // en utilisant le modulo
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            c++;
        }
    }
    if (c == 2)
    {
        printf(" %d est un nombre premier.\n", n);
    }
    else
    {
        printf(" %d n'est pas un nombre premier.\n", n);
    }

    // sans modulo
    c = 0; // il faut ré-initaliser le compteur (c) à 0
    for (int i = 1; i <= n; i++)
    {
        resultat = n / i;
        resultat = n - resultat * i;
        if (resultat == 0)
        {

            c++;
        }
    }
    if (c == 2)
    {
        printf(" %d est un nombre premier.\n", n);
    }
    else
    {
        printf(" %d n'est pas un nombre premier.\n", n);
    }

    // autre solution
    c = 0; // il faut ré-initaliser le compteur (c) à 0
    for (int i = 1; i <= n; i++)
    {
        int R = n, D = i;
        while (R >= D)
        {
            R -= D; // R = R-D;
        }
        if (R == 0)
        {
            c++;
        }
    }
    if (c == 2)
    {
        printf(" %d est un nombre premier.\n", n);
    }
    else
    {
        printf(" %d n'est pas un nombre premier.\n", n);
    }
}