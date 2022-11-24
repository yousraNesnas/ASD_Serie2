#include <stdio.h>
#include <stdlib.h>
int main()
{
    int M, A;
    printf("Donner le nombre A\n");
    scanf("%d", &A);
    M = A;

    //     if(M%2 == 0)
    //     {
    //         printf("%d est divisible par 2", A);
    //     }
    // else
    // {
    //        printf("%d n'est pas divisible par 2",A);
    // }

    while (M >= 2)
    {

        M -= 2;
    }

    if (M == 0)
    {
        printf("%d est divisible par 2", A);
    }
    else
    {
        printf("%d n'est pas divisible par 2", A);
    }
}
