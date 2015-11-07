
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

pii q[100 * 110];
int us[110][110], a[110][110], n, m;
int h, t;

void bfs(int i, int j)
{
	if (!a[i][j])
		return;
	h = t = 0;
	q[t++] = mp(i, j);
	us[i][j] = 0;
	while (h < t)
	{
		int x = q[h].F, y = q[h++].S;
		for (int i = -1; i <= 1; i++)
		for (int j = -1; j <= 1; j++)
		{
			 if (abs(i) + abs(j) != 1)
			 	continue;
			 if (1 <= x + i && x + i <= n && 1 <= y + j && y + j <= m && us[x + i][y + j] > us[x][y] + 1)
			 {
			 	us[x + i][y + j] = us[x][y] + 1;
			 	q[t++] = mp(x + i, y + j);
			 }
		}
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
			scanf("%d", &a[i][j]), us[i][j] = a[i][j] ? 0 : inf;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			bfs(i, j);
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
			printf("%d ", us[i][j]);
		puts("");
	}
			
}
