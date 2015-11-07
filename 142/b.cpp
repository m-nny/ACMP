
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
#define rank MyLittleRank
//#define end MyLittleEnd
#define all(x) x.begin(), x.end()
#define LOCAL

struct edge
{
	int a, b, c;
	edge(int a, int b, int c) : a(a), b(b), c(c) {};
};

int boss[maxn], rank[maxn];

int who(int x)
{
	if (boss[x] == x)
		return x;
	return boss[x] = who(boss[x]);
}

bool merge(int a, int b)
{
	a = who(a);
	b = who(b);
	if (a == b)
		return 0;
	if (rank[a] < rank[b])
		swap(a, b);
	if (rank[a] == rank[b])
		rank[a]++;
	boss[b] = a;
	return 1;
}

vector <edge> e;
int n, m;

bool cmp(edge a, edge b)
{
	return a.c < b.c;
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
		e.pb(edge(a, b, c));
	}
	sort(all(e), cmp);
	for (int i = 1; i <= n; i++)
		boss[i] = i;
	ll ans = 0;
	for (int i = 0; i < m; i++)
	{
		if (merge(e[i].a, e[i].b))
			ans += e[i].c;
	}
	printf(I64, ans);
}
