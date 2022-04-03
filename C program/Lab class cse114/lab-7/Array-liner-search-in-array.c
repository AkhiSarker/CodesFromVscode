#include <stdio.h>

int main()
{
    int a[100], i, n, value, pos = -1;

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
    for(i=0; i<n; i++)
    {
        if(value==a[i])
        {
            pos = i + 1;
        }
    }
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
