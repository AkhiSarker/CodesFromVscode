#include<stdio.h>
int main()
{
    int num[]= {10,20,30,40,50,60,70,80,90,100};
    int value,i, position = -1;

    printf("Enter the value you want to search : ");
    scanf("%d",&value);

    for(i=0; i<10; i++)
    {
        if(value==num[i])
        {
            position = i+1;
            break;
        }
    }

    if(position == -1)
    {
        printf("The value is not found");
    }
    else
    {
        printf("The value is found at position %d\n",position);
    }

    return 0;
}
