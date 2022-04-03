#include <stdio.h>
int main()
{
    char s[100];
    int i,vowels,consonants ;

    vowels= 0;
    consonants= 0;

    printf("Enter the string : ");
    scanf("%[^\n]",s);


    for(i=0; s[i] ; i++)
    {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||
                    s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            {
                vowels++ ;
            }
            else
            {
                consonants++ ;
            }

    }

    printf("Vowels : %d\n",vowels);
    printf("Consonants : %d\n",consonants);

    return 0;
}
