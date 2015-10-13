
#include <iostream>

using namespace std;

int n, mas [251] [251];

int main()
{
	freopen ("input.txt", "r", stdin);
	freopen ("output.txt", "w", stdout);
	cin>>n;
	for (int i = 0; i <= n; i++)
	{
		int x;
		for (int j = i + 1; j <= n; j++)
			cin>> mas [i] [j];
	}
	int res = mas [0] [n];
	for (int j = 1; j <= n; j++)
	{
		int buf = mas [0] [j] + mas [j] [n];
		res = min (res, buf);
		for (int k = j + 1; j < n; j++)
		{
			buf = mas [0] [j] + mas [j] [k] + mas [k] [n];
			res = min (res, buf);
		}
	}
	cout<<res;
	return 0;
}