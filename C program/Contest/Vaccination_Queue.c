#include<stdio.h>

int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int N,P,X,Y,i,sum = 0;
        int arr[N];

        scanf("%d,%d,%d,%d",&N,&P,&X,&Y);

        for(i=0; i<N; i++)
        {
            scanf("%d", &arr[i]);
        }

        for (i = 0; i < N; i++)
        {
            if(i+1 == P+1)
            {
                break;
            }
            else if(arr[i] == 0)
            {
                sum+= X;
            }
            else if(arr[i] == 1)
            {
                sum+= Y;
            }
        }
        printf("%d\n",sum);
    }

}
