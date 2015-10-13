
#include <iostream>

using namespace std;

int mas [101] [101], col [101];

int main()
{
	freopen ("input.txt", "r", stdin);
	freopen ("output.txt", "w", stdout);
	int n;
	cin>>n;
	for (int j = 1; j <= n; j++)
	{
		for (int k = 1; k <=n; k++)
		{
			cin>> mas [j] [k];
			mas [k] [j] = mas [j] [k];
		}
	}
	for (int i = 1; i <= n; i++)
		cin>>col [i];
	int res = 0;
	for (int i = 1; i <= n; i++)
		for (int j = i; j <= n; j++)
			if (col [i] != col [j])
				if (mas [i] [j])
					res++;
	cout<<res;
	return 0;
}