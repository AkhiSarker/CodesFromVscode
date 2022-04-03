
#include <iostream>
using namespace std;
int main()
{
    int n;

    cin >> n;

    int x = n * 1.08;

    if(x < 206)
    {
        cout  << "Yay!" << "\n";
    }
    else if(x == 206)
    {
        cout << "so-so" << "\n";
    }
    else
    {
        cout << ":(" << "\n";
    }
}
