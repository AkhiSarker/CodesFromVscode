#include<stdio.h>

void display(int x[])
{
    int j;
    for(j=0; j<10; j++)
    {
        printf("%d ",x[j]);
    }
}
int main()
{
    int num[] = {1,2,3,4,5,6,7,8,9,10};

    display(num);
}
