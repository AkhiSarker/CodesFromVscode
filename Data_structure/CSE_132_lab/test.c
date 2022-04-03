#include <stdio.h>

void array_modify(int arr[], int n)
{
    int i;
    if (n <= 1)
        return;

    int first_element = arr[0];
    for (i=0; i<n-1; i++)
    {
        arr[i] = arr[i] * arr[i+1];
    }
    arr[n-1] = first_element * arr[n-1];
}

int main()
{
    int arr[100];
    int n, i;
    printf("Enter the number of array: ");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        printf("Array element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    array_modify(arr, n);

    for (i=0; i<n; i++)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
}

