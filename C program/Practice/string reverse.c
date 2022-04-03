#include<stdio.h>
#include<string.h>
int main()
{
    char s[30];
    int i,c =0;

    printf("Enter a string : ");
    gets(s);

    for (i=0;s[i]!='\0';i++)
    {
        c++;
    }

   printf("String reverse : ");

   for(i=c-1; i>=0; i--)
   {
       printf("%c",s[i]);
   }
   return 0;
}
