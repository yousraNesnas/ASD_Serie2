/*Construire un algorithme permettant, pour un nombre N à
quatre chiffres, de permuter son premier chiffre avec le
dernier et le deuxième avec le troisième.*/

#include <stdio.h>

int main()
{
    int n, inverse = 0;

    printf("Donnez un nombre SVP!\t");
    scanf("%d", &n);
    int m = n;
    while (m > 0)
    {
        inverse = inverse * 10 + m % 10;
        m /= 10;
    }

    printf("\nl'inverse de %d est %d", n, inverse);
}