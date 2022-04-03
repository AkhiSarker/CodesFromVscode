#include <stdio.h>
int main()
{
    int i;
    printf("Enter range ( start and end ) : ");
    scanf("%d",&i);

    for(i=1; i<=50; i++)
    {
        if(i%3==0 && i%5==0)
            printf(" %d ",i);
    }
    getch();
}
