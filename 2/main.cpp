#include <iostream>

using namespace std;

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt","w", stdout);
	long long n, l=0;
	cin>>n;
	if (n == 0)
	{
		cout<<"1";
		return 0;
	}
	if (n >0)
		for (int i=1; i<=n; i++)
			l+=i;
	else
		for (int i=1; i>=n; i--)
			l+=i;
	cout<<l;
	return 0;
} 