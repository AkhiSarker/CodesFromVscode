#include <stdio.h>

void main()
{
    int i, arr1[1000], arr2[1000],n;

    printf("Enter the array elements: ");
    scanf("%d", &n);

    printf("Enter the array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("The array is: \n");
    for(i=0; i<n; i++)
    {
        printf("%d  ", arr1[i]);
    }

    int *a1,*a2;

    a1= &arr1[0],a2= &arr2[0];

    for(i=0; i<n; i++)
    {
        arr2[i]=arr1[i];
    }
    printf("\nThe copy array pointer is : \n");

    for(i=0; i<n; i++)
    {
        printf("%d  ", arr2[i]);
        a2++;
    }
}
