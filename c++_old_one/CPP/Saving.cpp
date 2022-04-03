#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int i, x = 0;
    for(i = 1; i<=n; i++)
    {
        x = x + i;
        if(x >= 12){
            cout << i;
            break;
        }
    }

}
