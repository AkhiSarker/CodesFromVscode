#include<stdio.h>
#include<string.h>
int main()
{
    char s1[]="akhi";
    char s2[]="akhi";

    int d = strcmp(s1,s2);

    if(d==0)
    {
        printf("Strings are equal\n");
    }
    else

        printf("String are not equal\n");

    return 0;
}
