
#include <iostream>
#include <cstdio>

using namespace std;

int n, m, t;
int a[200][200];

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d%d", &n, &m);
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				scanf("%d", &a[i][j]);
		int ok = 0;
		for (int i = 1; i < n; i++)
			for (int j = 1; j < m; j++)
			{
				int t = a[i - 1][j] + a[i][j] + a[i][j - 1] + a[i - 1][j - 1];
				if (t == 0 || t == 4)
				{
					ok = 1;
					break;
				}
			}
		puts(ok ? "NO" : "YES");
	}
}