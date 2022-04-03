#include<stdio.h>
int main()
{
    int num[100],i,n,large,small;

    printf("Enter the number of elements : ");
    scanf("%d",&n);

    printf(" \nThe array elements : ");

    for(i=0; i<n; i++)
    {
        scanf("%d",&num[i]);
    }

    large=num[0];
    small=num[0];

    for(i=1; i<n; i++)
    {
        if(num[i]>large)
            large=num[i];
    }

    for(i=1; i<n; i++)
    {
        if(num[i]<small)
            small=num[i];
    }


    printf("\nThe largest element : %d\n",large);
    printf("\nThe smallest element : %d\n",small);

    return 0;
}
