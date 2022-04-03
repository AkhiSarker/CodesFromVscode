#include <stdio.h>

int sum()
{
    int a,sum=0;
    scanf("%d",&a);

    for(int j=0; j<a; j++)
    {
        sum += a%10;
        a = a/10;
    }
    sum += a;
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
