#include<iostream>
using namespace std;
int main()
{
	int n,a[102],b[102];
	cin >> n;
	for(int i=1;i<=n;i++)
	{
		cin >> a[i];
		if (i == a[i]) b[i] = i;
		if (i != a[i])  b[a[i]] = i;
	}
	for (int j = 1; j < n; j++)
		cout << b[j] <<" ";
	    cout << b[n];
	return 0;
}

