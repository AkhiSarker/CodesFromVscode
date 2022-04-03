#include <stdio.h>

int main()
{
    int i, first, last, middle, n;
    char item, array[100];

    printf("Enter the size: ");
    scanf("%d",&n);
    fflush(stdin);

    printf("Enter array elements: \n", n);
    for (i = 0; i < n; i++)
    {
        printf("Element %d is: ", i+1);
        scanf("%c",&array[i]);
        fflush(stdin);
    }

    printf("\nEnter the value to find: ");
    scanf("%c", &item);

    first = 0;
    last = n - 1;
    middle = (first+last)/2;

    while (first <= last)
    {
        if (array[middle] < item)
            first = middle + 1;
        else if (array[middle] == item)
        {
            printf("This is found.\n", item, middle+1);
            break;
        }
        else
            last = middle - 1;
        middle = (first + last)/2;
    }
    if (first > last)
        printf("This is not found.\n", item);
    return 0;
}
