#include<stdio.h>
#include<string.h>
int main()
{
    char s1[]="My name is";
    char s2[]=" Akhi sarker";

    strcat(s1,s2);

    printf("s1 = %s\n",s1);

    return 0;
}

