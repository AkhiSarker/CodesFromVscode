#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10],i,j,row,col;

    printf("Enter the Row and column : ");
    scanf("%d %d",&row,&col);

    //a metrix
    printf("\nEnter elements for a metrix \n\n");

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("Row and column a[%d][%d] : ",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    // "printing a"
    printf("a = ");
    for(i=0; i<row; i++)
    {
        printf("\t");
        for(j=0; j<col; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    //b metrix
    printf("Enter elements for b metrix \n\n");

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("Row and column b[%d][%d] : ",i,j);
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
    // "printing b"
    printf("b = ");
    for(i=0; i<row; i++)
    {
        printf("\t");
        for(j=0; j<col; j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    // adding the matrix.....
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }

    }
    // "printing c"
    printf("\na + b = ");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
        printf("\t");
    }

    return 0;

}

