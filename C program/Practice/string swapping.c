#include<stdio.h>
#include<string.h>
int main()
{
    char s1[30];
    char s2[30];
    char temp[30];

    printf("Enter s1 string : ");
    gets(s1);
    printf("Enter s2 string : ");
    gets(s2);

    printf("\nBefore swapping\n");
    printf("string 1 = %s\n",s1);
    printf("string 2 = %s\n",s2);

    strcpy(temp,s1);
    strcpy(s1,s2);
    strcpy(s2,temp);

    printf("\nAfter swapping\n");
    printf("string 1 = %s\n",s1);
    printf("string 2 = %s\n",s2);

    return 0;
}
