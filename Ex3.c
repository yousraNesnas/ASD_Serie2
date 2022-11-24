#include <stdio.h>
#include <stdlib.h>
int main()
{
    int N, somme = 0;
    printf("Donner un nombre N\n");
    scanf("%d",&N);
    for (int i = 1; i <= N; i++)
    {
        somme += i;
    }

    printf("La somme de ");
    for (int i = 1; i <= N; i++)
    {
        if (i == N)
        {
            printf("%d= ", i);
        }
        else
        {
            printf("%d+ ", i);
        }
    }
    printf("%d", somme);
}
