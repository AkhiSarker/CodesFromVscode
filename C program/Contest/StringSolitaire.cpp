#include <iostream>

using namespace std;

void StringSolitaire()
{
    string s;
    cin >> s;

    int sz = s.size();

    int a = 0, b = 0, c = 0;

    for (int i = 0; i < sz; i++)
    {
        if(s[i] == 'A')
        {
            a++;
        }
        else if(s[i] == 'B')
        {
            b++;
        }
        else
        {
            c++;
        }
    }

    if(a >= b)
    {
        a = a - b;
        b = 0;
    }
    else if(b > a)
    {
        b = b - a;
        a = 0;
    }

    if(b >= c)
    {
        b = b - c;
        c = 0;
    }
    else if(c > b)
    {
        c = c - b;
        b = 0;
    }

    if(a+b+c == 0)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)

        StringSolitaire();

    return 0;
}
