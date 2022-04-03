#include <iostream>

using namespace std;

void WhichMixture()
{
    int A,B;
    cin >> A >> B;

    if (A>0 && B>0)
    {
        cout<<"Solution"<< endl;
    }
    else if(B == 0)
    {
        cout<<"Solid"<< endl;
    }
    else if(A == 0)
    {
        cout<<"Liquid"<< endl;
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)

        WhichMixture ();

    return 0;
}
