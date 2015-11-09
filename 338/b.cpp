
#include <bits/stdc++.h>

using namespace std;

typedef long long  ll;
typedef unsigned long long ull;
typedef map <int, int> mii;
typedef pair <int, int> pii;
typedef pair <ll, ll> pll;

int const maxn = int(1e5 + 12);
int const maxb = int(2e6 + 12);
int const inf = int(1e9 + 7);
ll const linf = ll(1e18 + 12);
double const eps = 1e-7;
double const pi = acos(-1);
#ifdef _WIN32
	#define I64 "%I64d"
#else
	#define I64 "%lld"
#endif
#define mp make_pair
#define pb push_back
#define F first
#define S second
#define next MyLittleNext
//#define end MyLittleEnd
#define all(x) x.begin(), x.end()
#define LOCAL

int n, m, ans;
int a[110][110], us[110][110];

void dfs(int x, int y)
{
	us[x][y] = 1;
	for (int i = -1; i < 2; i++)
	for (int j = -1; j < 2; j++)
	{
		if (abs(i) + abs(j) != 1)
			continue;
		x += i, y += j;
		if (1 <= x && x <= n && 1 <= y && y <= m && !us[x][y] && !a[x][y])
			dfs(x, y);
		x -= i, y -= j;
	}
}

int main()
{
	#ifdef LOCAL
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			scanf("%d", &a[i][j]);
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			if (!us[i][j] && !a[i][j])
				ans++, dfs(i, j);
	printf("%d", ans);
}
