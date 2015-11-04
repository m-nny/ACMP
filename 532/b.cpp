
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

struct man
{
	int a, b, in, out;
	man()
	{
		a = b = in = out = 0;
	}
	man(int)
	{
		scanf("%d%d%d%d", &a, &b, &in, &out);
	}
};

struct lower
{
	bool operator() (const man & a, const man & b) const
	{
		return a.a < b.a;
	}
};

struct upper
{
	bool operator() (const man & a, const man & b) const
	{
		return a.a > b.a;
	}
};

struct event
{
	int a, b, t;
	bool in;
	//event() : a(man()), in(0) {}
	event(man & mn, bool i) : a(mn.a), b(mn.b), t(i ? mn.in : mn.out), in(i) {}
};

bool operator < (event a, event b)
{
	if (a.t == b.t)
		return a.in ^ b.in ? a.in : a.a > b.a;
	return a.t < b.t;
}

set <man, lower> sit;
set <man, upper> stay;
vector <event> v;
int n, m, p;
man a[maxn];

int main()
{
	#ifdef LOCAL
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	scanf("%d%d%d", &n, &m, &p);
	for (int i = 1; i <= n; i++)
	{
		a[i] = man(i);
		v.pb(event(a[i], 0));
		v.pb(event(a[i], 1));
	}
	sort(all(v));
	for (event x : v)
		printf("a:%d b:%d t:%d i:%d\n", x.a, x.b, x.t, x.in);
	int cur = m;
	for (event x : v)
	{
		if (x.in)
		{
			if (cur || sit.begin() -> a < x.a)
			{
				if (cur)
					sit.insert(
			}
		}
	}
}
