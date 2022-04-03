#include<stdio.h>
int main()
{
    int n,i,a[100],even_sum = 0 ,odd_sum = 0 ;

    printf("Enter the any number : ");
    scanf("%d",&n);

    printf(" \nElements : ");

    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0; i<n; i++)
    {
        if(a[i]%2==0)
        {
            even_sum = even_sum + a[i];
        }
        else
        {
            odd_sum = odd_sum + a[i];
        }
    }
    printf("\nThe sum of even number : %d",even_sum);
    printf("\nThe sum of odd number : %d",odd_sum);

    return 0;
}
