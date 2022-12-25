/*Déterminer la racine carré d'un nombre A revient à trouver un
carré dont l’aire est A. En prenant un rectangle de côté
arbitraire a0 et de même aire, il est nécessaire que la longueur
de l’autre côté soit A/a0 . Or, en général, ce rectangle n’est pas
carré. Pour le rendre plus carré, il suffit de prendre un rectangle
dont la longueur est la moyenne arithmétique des
deux côtés précédents ( c-a-d: a1=(a0+A/a0)/2 ) et dont l'aire est
toujours A.
En substituant a1 avec a0, on peut répéter ce processus jusqu’à
ce que (a1)^2 soit très proche de A.
Écrire un algorithme qui détermine la racine carrée d'un
nombre avec les deux premiers chiffres décimaux exacts.


// calcul les racines carrées avec l'algo d'héron
*/
#include <stdio.h>
#include <math.h>

int main()
{
    float resultat, n, a0, a1;

    do
    {
        printf("entrez un nombre dont vous allez calculer sa racine carre : \n");
        scanf("%f", &n);
    } while (n <= 0);

    a0 = n;

    for (int i = 0; i < 8; i++)
    {

        a1 = (a0 + (n) / a0) / 2;
        a0 = a1;
    }
    resultat = a1;
    printf("resultat =  %f", resultat);
}
