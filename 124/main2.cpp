
#include <iostream>

int mas [101];

using namespace std;

int main()
{
	freopen ("input.txt", "r", stdin);
	freopen ("output.txt", "w", stdout);
	int n, m;
	cin>>n>>m;
	for (int i = 0; i < m; i++)
	{
		int x, y;
		cin>>x>>y;
		mas [x - 1]++;
		mas [y - 1]++;
	}
	for (int i = 0; i < n; i++)
		cout<< mas [i]<<" ";
	return 0;
}