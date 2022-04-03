#include<stdio.h>
int array2[100];
int main()
{
    int array1[100],n,i=0,j,p,temp=0;

    printf("Input array size :");
    scanf("%d",&n);

    printf("Enter elements in array : ");

    for ( j = 0; j <n; j++)
    {
        scanf("%d",&p);

        if(array2[p]==0)
        {
            array1[i]=p;
            array2[p]=1;
            i++;
        }

        else
            {
         temp++;
        i--;
        }

    }
    printf("This array : \n");

    for ( i = 0; i <n-temp; ++i)
    {
        printf("%d\t",array1[i] );
    }

    getch();
}
