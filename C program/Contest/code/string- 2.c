#include<stdio.h>


int main()
{
    int n;
    scanf("%d",&n);

    char str[30];
    scanf("%s",&str);

    while(n--)
    {
        for(int i = 0; i<n; i++)
        {
            if (str[i] == 'Z' && !(i & 1))
            {
                printf("NO");
                return 0;
            }
            else if (str[i] == 'A' && i & 1)
            {
                printf("NO");
                return 0;
            }
        }

    }

    printf("YES");

    return 0;
}
