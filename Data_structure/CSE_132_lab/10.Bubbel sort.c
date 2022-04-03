 #include<stdio.h>

void swap(int arr[],int k)
{
    int temp;
    temp=arr[k];
    arr[k]=arr[k+1];
    arr[k+1]=temp;

}

int main()
{
    int x[100],i,j,n,temp;

    printf("Enter the size : ");
    scanf("%d",&n);

    printf("Enter the elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&x[i]);
    }

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(x[j]>x[j+1])
                swap(x,j);
        }
    }

    printf("sorted number : ");
    for(i=0;i<n;i++)
        printf("%d ",x[i]);

      return 0;

}


