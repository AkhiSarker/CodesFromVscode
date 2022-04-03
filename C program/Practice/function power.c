#include<stdio.h>
void power(double base,double exp)
{
    double res=1,i;
     for(i=1;i<=exp;i++)
    {
        res = res * base ;
    }

    printf("\nResult : %.2lf\n",res);
}

int main()
{
    double base,exp;

    printf("Enter Base = ");
    scanf("%lf",&base);

    printf("Enter Exponent = ");
    scanf("%lf",&exp);

    power(base,exp);

}
