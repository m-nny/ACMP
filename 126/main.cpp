
#include <iostream>

using namespace std;

int mas [101], n;
string s;

int main()
{
	freopen ("input.txt", "r", stdin);
	freopen ("output.txt", "w", stdout);
	cin>>n;
	for (int i = 1; i <= n * n; i++)
			cin>>mas [i];
	int mini = 1002;	
	for (int j = 1; j <= n * n; j++)
	{
		for (int k = 1; k <= n * n; k++)
		{
			if (j == k)
				continue;
			for (int l = 1; l <= n * n; l++)
			{
				if (l == k)
					continue;
				mini = min (mini, (mas [j] + mas [k] + mas [l] ));
			}
		}	
	}
	cout<<mini<<'\n'<<s;
	return 0;
}