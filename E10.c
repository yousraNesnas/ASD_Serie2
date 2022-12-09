/*Ecrire un algorithme qui permet d’évaluer la série Sn suivante
pour n donné :
S_n = 1 + (1/3) + ... + ((-1)^n) / ((2*n+1)* n!) */

#include <stdio.h>
#include <math.h>
int main()
{
    float S_n;
    int n, f = 1;
    printf("Give n = ");
    scanf("%d", &n);

    for (int j = 2; j < n; j++)
    {
        f = f * j;
    }

    printf("f = %d\n", f);

    for (int i = 0; i <= n; i++)
    {
        // S_n = S_n + (float)((pow((-1), i) / (((2 * i) + 1) * f)));
        float a = pow((-1), i);
        float b = ((2 * i + 1) * f);
        float d = a/b;
        S_n = S_n + d;
    }

    printf("S_n = %.3f", S_n);
}