#include<stdio.h>

int prime(int a)
{
    int i;
    for(i=2; i<a; i++)
    {
        if (a%i==0)
        {
            return 0;
            break;
        }
    }

}

int main()
{
    int num,p=1;
    printf("Enter the number of check prime : ");
    scanf("%d",&num);

    p = prime(num);
    if(p==0)
        printf("Prime not number\n");
    else
        printf("prime number\n");

}
