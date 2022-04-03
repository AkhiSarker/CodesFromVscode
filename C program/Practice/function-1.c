#include<stdio.h>
void sum(int a,int b,int c)
{
    printf("Sum is : %d\n",a+b+c);
}
void sub(int a,int b,int c)
{
    printf("Subtraction is : %d\n",a-b-c);
}

int main()
{
    sum(10,20,30);
    sum(100,150,200);
    sub(100,10,50);
}
