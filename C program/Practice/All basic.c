#include<stdio.h>
int main()
{
    int num1,num2,result;

    printf("Enter two number : ");
    scanf("%d %d",&num1,&num2);

    result = num1 + num2;
    printf("sum = %d\n",result);

    result = num1 - num2;
    printf("sub = %d\n",result);

    result = num1 * num2;
    printf("Mul = %d\n",result);

    result = num1 / num2;
    printf("Div = %d\n",result);

    result = num1 % num2;
    printf("Remaider = %d\n",result);


    return 0;
}
