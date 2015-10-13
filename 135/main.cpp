
#include <iostream>

int n, mas [101] [101];
int mini [101] [101];

using namespace std;

int main()
{
	freopen ("input.txt", "r", stdin);
	freopen ("output.txt", "w", stdout);
	cin>>n;
	for (int j = 1; j <= n; j++)
		for (int k = 1; k <= n; k++)
		{
			cin>>mas [j] [k];
			mini [j] [k] = mas [j] [k];
		}
	for (int k = 1; k <= n; k++)
		for (int i = 1; i <= n; i++)
			for (int j = 1; j <= n; j++)
				mini [i] [j] = min (mini [i] [k], mini [i] [k] + mini [k] [j]);
	for (int j = 1; j <= n; j++)
	{
		for (int k = 1; k <= n; k++)
			cout<<mini [j] [k]<<" ";
		cout<<'\n';
	}
	return 0;
}