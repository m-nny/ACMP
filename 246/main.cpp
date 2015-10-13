#include <iostream>

using namespace std;

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt","w", stdout);
	int n, l, k;
	cin>>n;
	int q=n-1;
	cin>>l;
	for (int i=1; i<n; i++)
	{
		cin>>k;
		if (l+1==k)
			q--;
		l = k;
	}

	cout<<q;
	return 0;
} 