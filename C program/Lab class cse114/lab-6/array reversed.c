#include <stdio.h>
int main()
{
    int arr1[100],arr2[100],n, i;
    printf("Enter size of the array: ");
    scanf("%d", &n);

    printf("Enter elements in array: ");

    for(i=0; i<n; i++)
    {
        scanf("%d", &arr1[i]);
    }

    for(i=0; i<n; i++)
    {
        arr2[i]=arr1[n-i-1];
    }
    printf("Reversed array : ");
    for(i=0; i<n; i++)
    {
        printf("%d ",arr2[i]);
    }

    return 0;
}
