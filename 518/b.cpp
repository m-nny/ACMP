
#include <bits/stdc++.h>

using namespace std;

#define mp make_pair
typedef pair <int, int> pii;
int n, K, h, t, d[17][17][40], I[] = {-1, 0, 1, 0}, J[] = {0, 1, 0, -1};
char s[17][17];
pair <pii, int> Q[1000];

int main()
{
	cin >> n >> K;
	for (int i = 1; i <= n; i++)
		scanf("%s", s[i] + 1);
	Q[t++] = mp(mp(1, 1), 0);
	d[1][1][0] = 1;
	while (h < t)
	{
		int i = Q[h].first.first, j = Q[h].first.second, st = Q[h++].second;
		for (int k = 0; k < 4; k++)
			if (s[i + I[k]][j + J[k]] == '0')
			{
				if (!d[i + I[k]][j + J[k]][st + 1] && st < K)
					Q[t++] = mp(mp(i + I[k], j + J[k]), st + 1);
				d[i + I[k]][j + J[k]][st + 1] += d[i][j][st];
			}
	}
	cout << d[n][n][K];
}
