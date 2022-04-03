#include<stdio.h>
int main()
{
    int i,n, term1, term2, term;
    term1=0, term2=1;
    printf("Enter the number of term : ");
    scanf("%d",&n);
    printf("Fibonacci series : ");

    for(i=1; i<=n; i++)
    {
        printf("%d ",term1);
        term = term1 + term2;
        term1= term2;
        term2= term;
    }
    getch();
}
