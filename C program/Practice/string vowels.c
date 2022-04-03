#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],ch;
    int i,vowel,consonant,digit,other;

    printf("Enter a string : ");
    gets(str);

    i=vowel=0,consonant=digit=other=0;

    while((ch= str[i])!='\0')
    {
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
       ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
       vowel++;

       else if((ch>='a'&&ch>='z') || (ch>='A'&&ch>='Z'))
        consonant++ ;
        else if (ch>='0'&& ch<='0')
            digit++;
        else
            other++;

       i++;
    }
    printf("Number of vowels = %d\n",vowel);
    printf("Number of consonant = %d\n",consonant);
    printf("Number of digit = %d\n",digit);

    return 0;
}
