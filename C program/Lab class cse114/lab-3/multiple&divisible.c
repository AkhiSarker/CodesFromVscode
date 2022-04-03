#include<stdio.h>
int main()
{
    int n,m ;
    printf("Enter any number : ");
    scanf("%d",&n);

    m = n*3;

    if(m/5 || m/7)
    {
        printf("Condition is true \n");
    }
    else
        printf("Conditions do not mean \n ");

        return 0;
}

