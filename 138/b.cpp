
#include <bits/stdc++.h>

using namespace std;

typedef long long  ll;
typedef unsigned long long ull;
typedef map <int, int> mii;
typedef pair <int, int> pii;
typedef pair <ll, ll> pll;

int const maxn = int(1e5 + 12);
int const maxb = int(2e6 + 12);
int const inf = 30000;
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
//#define end MyLittleend
#define all(x) x.begin(), x.end()
#define LOCAL

struct edge
{
	int a, b, c;
	edge(int a, int b, int c) : a(a), b(b), c(c) {};
};

vector <edge> e;
int n, m;

int main()
{
	#ifdef LOCAL
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= m; i++)
	{
		int a, b, c;
		scanf("%d%d%d", &a, &b, &c);
		e.pb(edge(a, b, c));
	}
	vector <int> d(n + 1, inf);
	d[1] = 0;
	for (;;)
	{
		bool ok = 0;
		for (int i = 0; i < m; i++)
			if (d[e[i].a] < inf && d[e[i].a] + e[i].c < d[e[i].b])
			{
				ok = 1;
				d[e[i].b] = d[e[i].a] + e[i].c;
				//printf("-> %d [%d] = %d\n", e[i].b, e[i].a, d[e[i].b]);
			}
		if (!ok)
			break;
	}
	for (int i = 1; i <= n; i++)
		printf("%d ", d[i]);
}
