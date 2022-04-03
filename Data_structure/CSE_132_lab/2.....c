#include<stdio.h>

#define SIZE 100

int intialize(int matrix[][SIZE],int ver)
{
    int i, j;
    for(i=1; i<=ver; i++)
    {
        for(j=1; j<=ver; j++)
        {
            matrix[i][j]=0;
        }
    }
}

int main()
{
    int matrix[SIZE][SIZE];
    int i, j, edge, vert, start, end, indeg[100]= {0}, outdeg[100]= {0};

    printf("Enter the Number of vert : ");
    scanf("%d",&vert);
    printf("\n");

    printf("Enter the Number of Edge : ");
    scanf("%d",&edge);
    printf("\n");

    intialize(matrix, vert);

    printf("Enter Start and End of each Edge:\n");
    for(i=1; i<=edge; i++)
    {
        printf("Edge %d: ", i);
        scanf("%d %d",&start, &end);

        matrix[start][end]=1;

        outdeg[start]++;
        indeg[end]++;
    }

    printf("\n");

    /*for(i=1; i<=vert; i++)
    {
        for(j=1; j<=vert; j++)
        {
            if(matrix[i][j]==1)
            {
                outdeg[i]++;
                indeg[j]++;
            }
        }

    }*/

    printf("\n");

    printf("Adjec. Matix:\n");
    for(i=1; i<=vert; i++)
    {
        for(j=1; j<=vert; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    printf("Indegree:\n");
    for(i=1; i<=vert; i++)
    {
        printf("%d: %d\n",i, indeg[i]);
    }

    printf("\n");

    printf("Outdegree:\n");
    for(i=1; i<=vert; i++)
    {
        printf("%d: %d\n",i, outdeg[i]);
    }

    return 0;
}
