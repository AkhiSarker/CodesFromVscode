#include<stdio.h>

int main() {

    int A;
    scanf("%d", &A);

    if(((A*(A+1))/2)%2 == 1)
        printf("YES",A);
    else
        printf("NO",A);

    return 0;
}

