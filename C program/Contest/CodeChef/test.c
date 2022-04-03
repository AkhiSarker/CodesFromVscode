#include <stdio.h>

int solve()
{
    int n,r,count=0;
    scanf("%d",&n);

    while(n>0){
        r = n%10;
        n = n/10;

        if(r==4)
        {
            count++;
        }
    }

    printf("%d \n",count);

}

int main()
{
    int T;
    scanf("%d", &T);

    for(int i=1; i<=T; i++)
    {
        solve();
    }

    return 0;
}
