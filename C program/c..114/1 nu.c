#include <stdio.h>

int main()
{
    int n,over,rem_ball,r;

    scanf("%d",&n);
    over = n/6;
    rem_ball=n%6;
    r=over*22+(rem_ball==1)*6+(rem_ball==2)*10+(rem_ball==3)*13+(rem_ball==4)*16+(rem_ball==5)*19;
    printf("%d",r);

    return 0;
}
