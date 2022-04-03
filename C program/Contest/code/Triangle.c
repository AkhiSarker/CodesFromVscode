#include<stdio.h>
int main() {
    int A, B, C;

    scanf("%d %d %d", &A, &B, &C);

    if((A + B > C) && (B + C > A) && (C + A > B)) {
        printf("TRIANGLE");
    } else {
        printf("NO");
    }

    return 0;
}
