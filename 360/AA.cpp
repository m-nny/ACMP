
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <map>
#include <set>
#include <vector>
#include <queue>
#include <cmath>
#include <cstring>

using namespace std;

typedef long long  ll;
typedef unsigned long long ull;
typedef map <int, int> mii;
typedef pair <int, int> pii;
typedef pair <ll, ll> pll;

#define maxn 2000 + 12
#define maxb int(2e6 + 12)
#define inf int(1e9 + 7)
#define linf ll(1e18 + 12)
#define eps 1e-7
#define mp make_pair
#define pb push_back
#define F first
#define S second
#define LOCAL

int n, a[maxn][maxn];
int ans = -inf;

void get(int x, int y)
{
	multiset <int> se;
	for (int dx = -1; dx <= 1; dx++)
		for (int dy = -1; dy <= 1; dy++)
			if (abs(dx) + abs(dy) == 1)
				se.insert(a[x + dx][y + dy]);
	multiset <int> :: iterator it = se.end();
	int q, e;
	it--, q = *it;
	it--, e = *it;
	int res = a[x][y] + q + e;
	if (res > ans)
	{
		ans = res;
		//printf("%d %d %d %d\n", x, y, q, e);
	}
}

int main()
{
	FILE * In, * Out;
	In = fopen("input.txt", "r");
	Out = fopen("output.txt", "w");
	fscanf(In, "%d", &n);
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			fscanf(In, "%d", &a[i][j]);
	for (int i = 0; i <= n + 1; i++)
		a[0][i] = a[n + 1][i] = -inf;
	for (int i = 0; i <= n + 1; i++)
		a[i][0] = a[i][n + 1] = -inf;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			get(i, j);
	fprintf(Out, "%d", ans);
	fclose(In);
	fclose(Out);
}
