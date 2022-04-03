#include<stdio.h>
int main()
{
    int num1,num2,temp;

    printf("Enter 2 number : ");
    scanf("%d %d",&num1,&num2);

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("num1= %d\n",num1);
    printf("num2= %d\n",num2);

    return 0;
}

