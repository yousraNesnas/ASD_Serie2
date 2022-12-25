/*Soit N un nombre entier composé de trois chiffres. Ecrire un
algorithme qui permet de calculer la somme des cubes de ses
chiffres.*/

#include <stdio.h>

int main()
{
    int n, somme = 0, r;

    printf("Donnez un entier N a 3 chiffres SVP!\n");
    scanf("%d", &n);

    for (int i = 0; i < 3; i++)
    {
        r = n % 10;
        n /= 10; // n=n/10;

        r = r * r * r;
        somme = somme + r;
    }

    printf("La somme des cubes est : %d", somme);
}