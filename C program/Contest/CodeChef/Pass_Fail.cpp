#include <iostream>
using namespace std;

int passFail()
{
    int n,x,p;
    cin>>n>>x>>p;

    int y = n-x;
    int ans = (x*3) - y ;

    if(ans >= p)
    {
        cout<<"PASS" << endl;
    }
    else
    {
        cout<<"FAIL" << endl;
    }

}

int main()
{
    int t;
    cin >> t;

    while (t--)

        passFail();

    return 0;
}
