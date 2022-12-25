/*Écrire un algorithme qui permet d’évaluer un polynôme P(x)
d’ordre n pour une valeur donnée de x.*/

#include <stdio.h>

int main()
{
    int x, n, poly = 0, ps, coef;

    printf("Donnez la puissance n SVP!\n");
    scanf("%d", &n);

    printf("Donnez une valeur x !\n");
    scanf("%d", &x);

    for (int i = 1; i <= n; i++)
    {
        printf("Entrez le coefficient: ");
        scanf("%d", &coef);
        ps = 1;
        for (int j = 1; j <= i; j++)
        {
            ps = ps * x;
        }
        printf("ps =%d", ps);
        poly = poly + ps * coef;
        printf("poly =%d", poly);
    }

    printf("\nLe polynome au point %d égale a %d.", x, poly);
}