#include<stdio.h>

int Make_it_Divisible()
{
    int n;
     scanf("%d", &n);
        while(n>1)
        {
            printf("9");
            n--;
        }
        printf("3 \n");

}

int main()
{
    int T;
    scanf("%d", &T);

    for(int i=1; i<=T; i++)
    {
        Make_it_Divisible();
    }

    return 0;
}

