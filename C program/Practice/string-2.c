#include<stdio.h>
#include<string.h>
int main()
{
    char s1[]="akhi sarker";
    int i,len;

    len=strlen(s1);

    for(i=0;s1[i]!='\0';i++)
    {
        printf("%c\n",s1[i]);
    }

    printf("\nLength = %d\n",len);
    return 0;
}
