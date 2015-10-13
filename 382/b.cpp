
#include <bits/stdc++.h>

int n, c, x[] = {-1, 0, 1, 0}, y[] = {0, 1, 0, -1};
char s[55][55], z[55][55];

void dfs(int i, int j)
{
	z[i][j] = 1;
	for (int k = 0; k < 4; k++)
	{
		i += x[k];
		j += y[k];
		if (s[i][j] == '.' && !z[i][j])
			dfs(i, j);
		c += (s[i][j] == '#');
		i -= x[k];
		j -= y[k];
	}
}

int main()
{
	std::cin >> n;
	for (int i = 1; i <= n; i++)
		scanf("%s", s[i] + 1);
	for (int i = 1; i <= n; i++)
		s[0][i] = s[n + 1][i] = s[i][0] = s[i][n + 1] = '#';
	dfs(1, 1);
	if (!z[n][n])
		dfs(n, n);
	std::cout << (c - 4) * 25;
}
