
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

int us[maxn], n, m;
vector <int> g[maxn];

void dfs(int v)
{
	us[v] = 1;
	for (int i = 0; i < int(g[v].size()); i++)
	{
		int & to = g[v][i];
		if (us[to] == 1)
		{
			puts("NO");
			exit(0);
		}
		if (!us[to])
			dfs(to);
	}
	us[v] = 2;

}

int main()
{
	#ifdef LOCAL
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	scanf("%d%d", &n, &m);
	for (int i = 0; i < m; i++)
	{
		int a, b;
		scanf("%d%d", &a, &b);
		g[a].pb(b);
	}
	for (int i = 1; i <= n; i++)
		if (!us[i])
			dfs(i);
	puts("YES");
}
