#include<stdio.h>

void solve()
{
    int n, m, sum = 0;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d",&m);

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] + a[j] >= m)
            {
                sum++;
            }
        }
    }

    printf("%d", sum);
}

int main()
{
    solve();
    return 0;
}
