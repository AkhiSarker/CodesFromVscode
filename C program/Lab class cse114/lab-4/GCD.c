#include<stdio.h>
int main()
{
    int num1,num2,n1,n2,gcd,rem;

    printf ("Enter 2 number : ");
    scanf("%d %d",&num1,&num2);

    n1 = num1;
    n2 = num2;

    while(n2!=0)
    {
        rem = n1%n2;
        n1 = n2;
        n2 = rem;
    }
    gcd = n1;
    printf("GCD = %d\n",gcd);

    return 0;

}
