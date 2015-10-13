
#include <iostream>

using namespace std;

int n, k;
bool used [101], mas [101] [101];

void rec(int x)
{
	used [x] = 1;
	for (int i = 1; i <= n; i++)
		if ((mas [x] [i]) && (! used [i]))
			rec (i);
	return;
}

main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	cin>>n>>k;

	int x, y;
	while (true)
	{
		cin>>x;
		if (x == 0)
			break;
		cin>>y;
		mas [x] [y] = 1;
	}

	rec (k);
	for (int i = 1; i <= n; i++)
		if (! used[i])
		{
			cout<<"No";
			return 0;
		}
	cout<<"Yes";
	return 0;
}