
#include <bits/stdc++.h>

using namespace std;

typedef long long  ll;
typedef unsigned long long ull;
typedef map <int, int> mii;
typedef pair <int, int> pii;
typedef pair <ll, ll> pll;

int const maxn = int(1e3 + 12);
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

struct pt
{
	ll x, y;
	pt()
	{
		x = y = 0;
	}
	pt(int)
	{
		scanf(I64 I64, &x, &y);
	}
	ll dist2(pt a)
	{
		return (a.x - x) * (a.x - x) + (a.y - y) * (a.y - y);
	}
	double dist(pt a)
	{
		return sqrt(dist2(a));
	}
};

pt net, a[maxn];
int n;
ll c, p;
int main()
{
	#ifdef LOCAL
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	scanf("%d" I64 I64, &n, &c, &p);
	for (int i = 1; i <= n; i++)
		a[i] = pt(1);
	net = pt(1);
	double D = .0;
	for (int i = 1; i <= n; i++)
	{
		D = net.dist(a[i]);
		for (int j = 1; j <= n; j++)
			D += a[i].dist(a[j]);
		if (D * c <= p)
		{
			puts("YES");
			return 0;
		}
	}
	puts("NO");
}
