#include<stdio.h>

void PrintArray(int a[], int Size)
{
    int i;
    for(i = 0; i < Size; i++)
    {
        printf("%d \t ", a[i]);
    }
    printf("\n");
}

int main()
{
    int n, i, arr[10], Positive[10], Negative[10];
    int p_Count = 0,n_Count = 0;

    printf("Enter the size : ");
    scanf("%d", &n);

    printf("Enter the elements : ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i ++)
    {
        if(arr[i] >= 0)
        {
            Positive[p_Count] = arr[i];
            p_Count++;
        }
        else
        {
            Negative[n_Count]  = arr[i];
            n_Count++;
        }
    }


    printf("Elements in Positive number %d :  ", p_Count);
    PrintArray(Positive, p_Count);

    printf("Elements in Negative number %d  : ", n_Count);
    PrintArray(Negative, n_Count);

    return 0;
}

