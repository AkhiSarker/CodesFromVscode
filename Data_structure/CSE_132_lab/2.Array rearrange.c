#include<stdio.h>
void position_swap(int arr[], int n);
void swap(int* a, int i, int j);

int main()
{
    int arr[100];
    int n, i;

    printf("Enter the size: ");
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        printf("Array element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("Array before swaping:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");

    position_swap(arr, n);

    printf("Array after swaping:\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
}
void swap(int* a, int i, int j)
{
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
    return ;
}
void position_swap(int arr[], int n)
{
    int j;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] >= 0 && i % 2 == 1)
        {
            for(j = i + 1; j < n; j++)
            {
                if(arr[j] < 0 && j % 2 == 0)
                {
                    swap(arr, i, j);
                    break ;
                }
            }
        }
        else if(arr[i] < 0 && i % 2 == 0)
        {
            for(j = i + 1; j < n; j++)
            {
                if(arr[j] >= 0 && j % 2 == 1)
                {
                    swap(arr, i, j);
                    break;
                }
            }
        }
    }
}
