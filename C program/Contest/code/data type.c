#include<stdio.h>

int main()
{
    /*int b = 2147483648;
    printf("%d ",b);*/

    char ch;
    char s[100],sen[100];

    scanf("%c", &ch);
    scanf("%s",s);
    scanf("\n");
    scanf("%[^\n]%*c", sen);

    printf("%c \n", ch);
    printf("%s \n", s);
    printf("%s \n", sen);

}
