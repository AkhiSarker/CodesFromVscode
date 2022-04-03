#include <iostream>
using namespace std;

void Boxes()
{
    int A,B,C,D;
    cin >> A >> B >> C >>D;

    if(A+B+C<=D)
    {
        cout<<1<<endl;
    }
    else if(A+B<=D)
    {
        cout<<2<<endl;
    }
    else if(A<=D)
    {
        cout<<3<<endl;
    }

}

int main()
{
    int t;
    cin >> t;

    while (t--)

        Boxes();

    return 0;
}

