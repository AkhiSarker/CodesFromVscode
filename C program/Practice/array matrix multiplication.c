#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],result[10][10],i,j,r1,c1,r2,c2,k,sum=0;

    printf("Enter Row and column for first matrix : ");
    scanf("%d %d",&r1,&c1);

    printf("Enter Row and column for second matrix : ");
    scanf("%d %d",&r2,&c2);

    while(c1!=r2)
    {
        printf("Error !! column of first matrix not equal to row of second matrix\n");

        printf("Enter Row and column for first matrix : ");
        scanf("%d %d",&r1,&c1);

        printf("Enter Row and column for second matrix : ");
        scanf("%d %d",&r2,&c2);
    }
    // taking input first matrix of a
    printf("\nEnter the first matrix\n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("first [%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    // taking input second matrix of b
    printf("\nEnter the second matrix\n");
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("second [%d][%d] = ",i,j);
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }

    //multiplication matrix
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            for(k=0; k<c1; k++)
            {
                sum= sum + a[i][k]*b[k][j];
            }
            result[i][j] = sum;
            sum = 0;
        }
    }

    // "printing first (a)"
    printf("\n\nfirst matrix = \n");
    for(i=0; i<r1; i++)
    {

        for(j=0; j<c1; j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    // "printing second (b)"
    printf("\n\nsecond matrix = \n");
    for(i=0; i<r2; i++)
    {

        for(j=0; j<c2; j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    // "printing result matrix"
    printf("\n\nresult matrix  \n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }


}
