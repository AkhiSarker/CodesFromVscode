#include <stdio.h>
int main()
{
    char ch ;
    int i,vowels,consonants ;

    printf("Enter the letter : ");
    scanf("%c",&ch);

    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
       ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
        printf("\n vowels");
    }
    else
    {
        printf("\n consonants");
    }

    getch();
}

