# include<stdio.h>
int main()
{
    FILE *file;
    char name[20] = " Akhi sarker";
    int length = strlen(name);
    int i;
    file = fopen("test.txt","a");

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
        printf("File is witten successfully");
        fclose(file);
    }

    getch();
}
