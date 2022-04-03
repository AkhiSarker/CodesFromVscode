#include<stdio.h>
int arr[100],n;

void fun(int a,int b)
{
    arr[b-1]=a;

}

int main()
{
    int p,x,m=1;

    printf("Input array size :");
    scanf("%d",&n);

    printf("Input array :\n");

    for (int i = 0; i <n; ++i)
    {
        scanf("%d",&arr[i]);
    }


    printf("Input replaced value  :");
    scanf("%d",&p);

    printf("Input replaced possiton  :");
    scanf("%d",&x);

    fun(p,x);

    printf("Array after change :");

    for (int i = 0; i <n; ++i)
    {
        printf("%d ",arr[i]);
    }

    return 0;

}
