
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
	int a, b, in, out;
	edge(int a, int b, int in, int out) : a(a), b(b), in(in), out(out) {};
};

int n, m, a, b;
vector <edge> e;

int main()
{
	#ifdef LOCAL
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	scanf("%d%d%d%d", &n, &a, &b, &m);
	for (int i = 1; i <= m; i++)
	{
		int x, y, in, out;
		scanf("%d%d%d%d", &x, &in, &y, &out);
		e.pb(edge(x, y, in, out));
	}
	vector <int> d(n + 1, inf);
	d[a] = 0;
	for (;;)
	{
		bool ok = 0;
		for (int i = 0; i < m; i++)
			if (d[e[i].a] < inf && d[e[i].a] <= e[i].in && e[i].out < d[e[i].b])
			{
				d[e[i].b] = e[i].out;
				ok = 1;
			}
		if (!ok)
			break;
	}
	printf("%d", d[b] < inf ? d[b] : -1);
}
