
#include <iostream>
#include <vector>
#include <cstdio>
#include <set>
#include <map>
#include <queue>

using namespace std;

int n, mas [251] [251];

int main()
{
//	freopen ("input.txt", "r", stdin);
//	freopen ("output.txt", "w", stdout);
	cin >> n;
	for (int i = 0; i <= n; i++)
		for (int j = 0; j <= n; j++)
			mas[i][j] = -1;
	for (int i = 0; i <= n; i++)
		for (int j = i + 1; j <= n; j++)
			cin >> mas[i][j];
	queue<int> q;
	vector<char> us(n+1);
	vector<int> d(n+1);
	q.push(0);
	while (!q.empty())
	{
		int v = q.front();
		q.pop();
		for (int i = v; i <= n; i++)
			if (mas[v][i] != -1)
			{
				if (!us[i])
				{
					us[i] = 1;
					q.push(i);
					d[i] = d[v] + mas[v][i];
				}
			}
	}
	for (int i = 0; i <= n; i++)
		cout << d[i] <<"  ";
}