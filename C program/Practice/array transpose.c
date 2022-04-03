#include<stdio.h>
int main()
{
    int A[10][10],trans[10][10],i,j,row,col;
    printf("Enter Row and column for matrix : ");
    scanf("%d %d",&row,&col);

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
    }


    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            trans[j][i] = A[i][j];
        }
    }

        printf("\n Matrix \n");
        for(i=0; i<row; i++)
        {
            for(j=0; j<col; j++)
            {
                printf("%d  ",A[i][j]);
            }
            printf("\n");
        }

        printf("\nTranspose Matrix \n");
        for(i=0; i<row; i++)
        {
            for(j=0; j<col; j++)
            {
                printf("%d  ",trans[i][j]);
            }
            printf("\n");
        }

    }
