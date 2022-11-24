#include <stdio.h>
#include <stdlib.h>

int main()
{
    int min=0,n,N,i;
    printf("Donner le nombre de n\n");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        printf("Donner le nombre %d eme nombre\n",i);
        scanf("%d",&N);
        if(min>N || i==1)
            min=N;
    }
    printf("Le minimum est %d", min);
}
