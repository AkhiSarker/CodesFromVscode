#include <stdio.h>

int solve()
{
    int arr[8];
    int a = 0,b = 0;

    for (int i = 0; i < 7; i++)
    {
        scanf("%d", &arr[i]);

        if(arr[i]==0)
        {
            a++;
        }
        else
        {
            b++;
        }
    }
    if(a>b)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}

int main()
{

    int T;
    scanf("%d", &T);

    for(int i=1; i<=T; i++)
    {
        solve();
    }

    return 0;
}

