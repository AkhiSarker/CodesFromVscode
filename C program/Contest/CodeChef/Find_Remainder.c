#include <stdio.h>

int remainder()
{
    int a,b;
    scanf("%d %d",&a,&b);
       int remainder = a%b;
    printf("%d \n",remainder);

}

int main()
{
    int T;
    scanf("%d", &T);

    for(int i=1; i<=T; i++)
    {
        remainder();
    }

    return 0;
}
