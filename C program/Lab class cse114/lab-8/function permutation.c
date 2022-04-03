#include<stdio.h>

long factorial(long a)
{
    if(a<=1)
        return 1;
    return (a*factorial(a-1));
}

int main()
{
    long n, r, result;

    printf("Enter value on 'n': ");
    scanf("%ld", &n);

    printf("Enter value on 'r': ");
    scanf("%ld", &r);

    result = factorial((n)/(n-r)) ;

    printf("Result of permutation(%d, %d): %d\n", n,r,result);

}
