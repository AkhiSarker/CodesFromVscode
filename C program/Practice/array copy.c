#include<stdio.h>
int main()
{
    int array1[5], array2[5], i,n;

    printf("Enter the size number : ");
    scanf("%d", &n);

    printf("Enter elements in array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&array1[i]);
    }
    printf("\nArray1= ");
    for (i=0; i<n; i++)
    {
        printf("%d ",array1[i]);
    }

    //copying all the elements from array1 to array2
    for (i=0; i<n; i++)
    {
        array2[i] = array1[i];
    }
    printf("\nArray2= ");
    for (i=0; i<n; i++)
    {
        printf("%d ",array2[i]);
    }

    getch();
}

