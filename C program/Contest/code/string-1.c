#include <stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);

    char str[30];
    scanf("%s",&str);


    for(int i = 0; i<n; i++)
    {
        if (i & 1 && str[i] != 'Z')
        {
            printf("NO");
            return 0;
        }
        else if (!(i & 1) && str[i] != 'A')
        {
            printf("NO");
            return 0;
        }
    }


    printf("YES");


    return 0;
}


