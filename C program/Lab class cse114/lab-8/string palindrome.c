#include<stdio.h>
#include<string.h>
int main()
{
    char s[30];
    char s1[30];
    int i,c =0;

    printf("Enter a string : ");
    gets(s);

    strcpy(s1,s);

    for (i=0; s[i]!='\0'; i++)
    {
        c++;
    }

    printf("String reverse : ");

    for(i=c-1; i>=0; i--)
    {
        printf("%c",s[i]);
    }

    int d = strcmp(s,s1);

    if(d==0)
    {
        printf("\nPalindrome are equal\n");
    }
    else

        printf("\nPalindrome are not equal\n");

    return 0;

}


