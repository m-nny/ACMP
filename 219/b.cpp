
#include <bits/stdc++.h>

using namespace std;

typedef long long  ll;
typedef unsigned long long ull;
typedef map <int, int> mii;
typedef pair <int, int> pii;
typedef pair <ll, ll> pll;

int const maxn = 22;
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
	int a, b;
	ll c, f;
	edge(int a, int b, ll c) : a(a), b(b), c(c), f(0ll) {};
};

int n, m, r[maxn], c[maxn];
vector <int> g[15000];
vector <edge> e;

void add_edge(int a, int b, int c)
{
	//printf("%d->%d %d\n", a, b, c);
	edge x = edge(a, b, c),
		y = edge(b, a, 0ll);
	g[a].pb(e.size());
	e.pb(x);
	g[b].pb(e.size());
	e.pb(y);
}

int q[15000], qh, qt;
int d[15000], S = 0, T = 1000, ptr[15000];

bool bfs()
{
	qh = qt = 0;
	q[qt++] = S;
	memset(d, -1, sizeof(d));
	d[S] = 0;
	while (qh < qt)
	{
		int & v = q[qh++];
		for (int i = 0; i < int(g[v].size()); i++)
		{
			int id = g[v][i], to = e[id].b;
			if (d[to] == -1 && e[id].f < e[id].c)
			{
				q[qt++] = to;
				d[to] = d[v] + 1;
			}
		}
	}
	return d[T] != -1;
}

ll dfs(int v, ll flow)
{
	if (!flow)
		return 0;
	if (v == T)
		return flow;
	for (; ptr[v] < int(g[v].size()); ptr[v]++)
	{
		int id = g[v][ptr[v]], to = e[id].b;
		if (d[to] != d[v] + 1)
			continue;
		ll pushed = dfs(to, min(flow, e[id].c - e[id].f));
		if (pushed)
		{
			e[id].f += pushed;
			e[id ^ 1].f -= pushed;
			return pushed;
		}
	}
	return 0;
}

int dinic()
{
	ll flow = 0ll;
	for (;;)
	{
		if (!bfs()) break;
		memset(ptr, 0, sizeof(ptr));
		while (int pushed = dfs(S, inf))
			flow += pushed;
	}
	return flow;
}

int main()
{
	#ifdef LOCAL
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	scanf("%d%d", &n, &m);
	for (int i = 0; i < n; i++)
		scanf("%d", r + i);
	for (int i = 0; i < m; i++)
		scanf("%d", c + i);
	ll f = 0ll;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
		{
			int z;
			scanf("%d", &z);
			if (z == -1)
			{
				add_edge(i + 1, j + 200, inf);
				continue;
			}
			r[i] -= z;
			c[j] -= z;
			f += z;
			if (r[i] < 0 || c[j] < 0)
			{
				puts("-1");
				return 0;
			}
		}
	for (int i = 0; i < n; i++)
		if (r[i] > 0)
			add_edge(0, i + 1, r[i]);
	for (int i = 0; i < m; i++)
		if (c[i] > 0)
			add_edge(i + 200, T, c[i]);
	
	f += dinic();
	printf(I64, f);
}
