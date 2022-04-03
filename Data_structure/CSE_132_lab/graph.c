#include<stdio.h>
#define sz 10

void init(int mat[][sz],int v)
{
    int i,j;
    for(i=0; i<v; i++)
    {
        for(j=0; j<v; j++)
            mat[i][j] = 0;
    }
}

void print_Matrix(int mat[][sz],int v)
{
    int i,j;

    printf("\nAdjacency Matrix:\n");
    for(i=0; i<v; i++)
    {
        for(j=0; j<v; j++)
        {
            printf("%d ",mat[i][j]);
        }

        printf("\n");
    }

}

int main()
{
    int i,ver,edg,st,en,indeg[100]={0},outdeg[100]={0};
    int adjMat [sz] [sz];

    printf("Enter number or vertex: ");
    scanf("%d",&ver);

    printf("Enter number or edges: ");
    scanf("%d",&edg);

    init(adjMat, ver);

    printf("Enter start and end :  \n");
    for(i=0; i<edg; i++)
    {
        printf("Edge %d: ",i+1);
        scanf("%d %d",&st,&en);

        adjMat[st][en]=1;

        outdeg[st]++;
        indeg[en]++;

        adjMat[st-1][en-1] = 1;

    }

    print_Matrix(adjMat,ver);

    printf("Indegree:\n");
    for(i=1; i<=ver; i++)
    {
        printf("%d: %d\n",i, indeg[i]);
    }

    printf("\n");

    printf("Outdegree:\n");
    for(i=1; i<=ver; i++)
    {
        printf("%d: %d\n",i, outdeg[i]);
    }

    return 0;
}
