#include<stdio.h>
int main()
{
    int i,j,k;
    scanf("%d %d",&i,&j);
    if(i>j)
    {
        k=i-j;
    }
    else
        k = j-i;
    printf("Perbedaan = %d",k);
    return 0;
}
