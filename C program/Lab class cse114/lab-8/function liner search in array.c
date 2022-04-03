#include <stdio.h>

int search_result(int a[], int s_item, int num)
{
    int i, position = -1;

    for(i=0; i<num; i++)
    {
        if(s_item == a[i])
        {
            position = i + 1;
        }
    }
    return position;
}

int main()
{
    int a[100], i, n, value, pos;

    printf("Enter size of the array: ");
    scanf("%d", &n);

    printf("\nEnter the array elements:-\n");
    for(i=0; i<n; i++)
    {
        printf("Element for i = %d: ", i);
        scanf("%d", &a[i]);
    }
    printf("\nThe actual array is: \n");
    for(i=0; i<n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n\nEnter the elements you want to search in the array: ");
    scanf("%d", &value);

    pos = search_result(a, value, n);

    if(pos == -1)
    {
        printf("Not found");
    }
    else
    {
        printf("\nThe value is found.\n%d exist in %dth position.", value, pos);
    }

    getch();
}


