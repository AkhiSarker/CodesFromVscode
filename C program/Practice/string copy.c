#include<stdio.h>
#include<string.h>
int main()
{
    char i[]="Hello world";
    char j[30];

    strcpy(j,i);

    printf("Source string = %s\n",i);
    printf("Copy string = %s\n",j);
}
