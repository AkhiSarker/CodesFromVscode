#include <stdio.h>

void solve(int A, int B, int C)
{
    if (A == B || B == C)
    {
        printf("B\n");
        return;
    }
    if ((B >= A && A >= C) || (C >= A && A >= B))
    {
        printf("A\n");
        return;
    }
    if ((A >= B && B >= C) || (C >= B && B >= A))
    {
        printf("B\n");
        return;
    }
    if ((A >= C && C >= B) || (B >= C && C >= A))
    {
        printf("C\n");
        return;
    }
}


int main()
{
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    solve(A,B,C);

    return 0;
}



