#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    while(n--)
    {
        char ch[100];
        canf("%c", &ch);

        int count1 = 0, count2 = 0;

        for (int i = 0; ch[i] != '\0'; i++)
        {
            count1++;
        }
        if (count1 <= 10)
        {
            printf(ch);
        }
        else
        {

            for (int i = 1; i < count1 - 1; i++)
            {
                count2++;
            }

        }
        printf(" ");
    }

    return 0;
}

