# include<stdio.h>
int main()
{
    FILE *file;
    char name [20] = "Hello akhi";
    int length = strlen(name);
    int i;

    file = fopen("test.txt","w");

    if(file==NULL)
    {
         printf("File doesn't esist");
    }
    else
    {
        printf("File is opened\n");
        for(i=0;i<length;i++)
        {

           fputc(name[i],file);
        }
         fputc('\n',file);

          for(i=0;i<length;i++)
        {

           fputc(name[i],file);
        }

        printf("File is written successfully");
        fclose(file);
    }

    getch();
}

