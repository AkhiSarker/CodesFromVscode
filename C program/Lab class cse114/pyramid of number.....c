#include<stdio.h>
int main()
{
    int raw,col,n;

    printf("Input pyramid number : ");
    scanf("%d",&n);

    for (raw= 1; raw<=n; raw++)
    {
        //printing space
        for (col=1; col<=n-raw; col++)
        {
            printf("  ");
        }
        //printing number
        for (col=1; col<=raw; col++)
        {
            printf(" %d",col);
        }
        printf("\n");
    }
}
