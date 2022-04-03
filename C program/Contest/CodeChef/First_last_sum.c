#include <stdio.h>

int sum()
{
    int n,r,sum = 0;
    scanf("%d",&n);

       int lastDidit = n%10;

    while(n>0)
    {
        r = n %10;
        n = n /10;
    }
    sum = r + lastDidit ;
    printf("%d \n",sum);

}

int main()
{
    int T;
    scanf("%d", &T);

    for(int i=1; i<=T; i++)
    {
        sum();
    }
    return 0;
}
