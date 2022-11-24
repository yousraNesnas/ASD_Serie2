#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, N, D, R;
    printf("Saisir le numérateur N\n");
    scanf("%d", &N);
    printf("Saisir le dénominateur D\n");
    scanf("%d", &D);
    R = N;
    // while(R>=D){
    //     R-=D; // R = R-D;
    //     i++;
    // }
    // for(i=0; R>=D; i++)
    // {
    //     R-=D;
    // }
    do
    {
        R -= D; // R = R-D;
        i++;
    } while (R >= D);

    printf("%d / %d = %d et le reste de la division est : %d", N, D, i, R);
}
