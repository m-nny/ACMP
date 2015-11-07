
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

struct edge
{
	int a, b, c;
	edge(int a, int b, int c) : a(a), b(b), c(c) {};
};

int n, m;
vector <edge> e;
vector <int> g[maxn];
int us[maxn];

void dfs(int v)
{
	us[v] = 1;
	for (int i = 0; i < int(g[v].size()); i++)
	{
		int to = g[v][i];
		if (!us[to])
			dfs(to);
	}
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
		int a, b, c;
		scanf("%d%d%d", &a, &b, &c);
		g[a].pb(b);
		e.pb(edge(a, b, -c));
	}
	vector <int> d(n + 1, inf);
	d[1] = 0;
	int x = -1;
	for (int i = 0; i < n; i++)
	{
		x = -1;
		for (int j = 0; j < m; j++)
			if (d[e[j].a] < inf && d[e[j].b] > d[e[j].a] + e[j].c)
			{
				d[e[j].b] = max(-inf, d[e[j].a] + e[j].c);
				x = e[j].b;
			}
		//printf("%d ", x);
	}
	if (x != -1)
		dfs(x);
	if (us[n])
	{
		puts(":)");
		return 0;
	}
	if (d[n] >= inf)
	{
		puts(":(");
		return 0;
	}
	printf("%d", -d[n]);
}
