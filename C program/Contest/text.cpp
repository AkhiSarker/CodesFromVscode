#include <iostream>

using namespace std;

int main()
{
    long long int a[10],n,i,sum=0;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
        scanf("%lld",&a[i]);
    for(i=0;i<n;i++)
        sum=sum+a[i];
    printf("%lld",sum);
    return 0;
}
