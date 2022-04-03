#include<stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    for(int i=1; i<=T; i++)
    {
        int M,N,K;
        scanf("%d %d %d", &M,&N,&K);

        if(N*K>=M)
        {
            printf("NO \n");
        }
        else
            printf("YES\n");
    }

    return 0;
}
