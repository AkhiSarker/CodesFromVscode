 #include<stdio.h>
int main()
{
    char str[100],ch,ch1;
    int i,count = 0;

    printf("Enter the string : ");
    gets(str);

    printf("Enter the character : ");
    scanf("%c",&ch);

    for (i=0; str[i]!='\0'; i++)
    {
        ch1=str[i];
        if(ch ==str[i])
        {
            count++;

        }

    }
    printf("Frequency of %c is : %d",ch,count);

   return 0;
}
