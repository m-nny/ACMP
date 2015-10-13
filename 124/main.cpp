
#include <iostream>

using namespace std;

int main()
{
	freopen ("input.txt", "r", stdin);
	freopen ("output.txt", "w", stdout);
	int n, m;
	bool mas [102] [102];
	cin>>n>>m;
	for (int i = 1; i <= m; i++)
	{
		int x, y;
		cin>>x>>y;
		mas [x] [y] = true;
		mas [y] [x] = true;
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
			cout<< mas [i] [j]<<" ";
		cout<<'\n';
	}
	cout<<'\n';
	for (int i = 1; i <= n; i++)
	{
		int buf = 0;
		for (int j = 1; j <= n; j++)
			if (mas [i] [j])
				buf++;
		cout<<buf<<" ";
	}
	return 0;
}