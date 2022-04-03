#include<stdio.h>
int main()
{
    int x=3 , z=6, y;

    y = ++x + x++;
    printf("y= %d",y);

    y = x>z? x:z;
    printf("\ny= %d",y);

    y = x&z;
    printf("\ny= %d",y);

    return 0;
}

