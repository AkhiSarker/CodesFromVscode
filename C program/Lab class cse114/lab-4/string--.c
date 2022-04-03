#include<stdio.h>
int main()
{
    int i;
    char a[100];
    printf("Enter the text : ");
    gets(a);

    for(i=0;a[i]!='\0';i++)
    {
        printf("%c\n",a[i]);
    }

    return 0 ;

}
