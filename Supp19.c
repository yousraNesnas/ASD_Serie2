/*Soit N un entier de cinq chiffres. Ecrire un algorithme qui
permet d’afficher le chiffre du milieu et la somme des autres
chiffres.*/

#include <stdio.h>

int main()
{
    int n, somme = 0, r;

    printf("Donnez un entier N a 5 chiffres SVP!\n");
    scanf("%d", &n);

    for (int i = 0; i < 5; i++)
    {
        r = n % 10;
        n /= 10; // n=n/10;
        if (i == 2)
        {
            printf("Le chiffre du milieu est %d\n", r);
        }
        else
        {
            somme = somme + r;
        }
    }

    printf("La somme des autres chiffres est : %d", somme);
}