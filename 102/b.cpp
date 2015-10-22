
#include <bits/stdc++.h>

using namespace std;

typedef long long  ll;
typedef unsigned long long ull;
typedef map <int, int> mii;
typedef pair <int, int> pii;
typedef pair <ll, ll> pll;

int const maxn = int(2e5 + 12);
int const maxb = int(2e6 + 12);
int const inf = int(1e9 + 7);
ll const linf = ll(1e18 + 12);
double const eps = 1e-10;
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
#define all(x) x.begin(), x.end()
#define fn "convex"

struct pt
{
	ll x, y;
	pt()
	{
		x = y = 0;
	}
	pt(ll _x, ll _y)
	{
		x = _x;
		y = _y;
	}
	pt operator - (pt &r)
	{
		return pt(x - r.x, y - r.y);
	}
	ll operator * (const pt & p) const
	{
		return x * p.y - y * p.x;
	}
	void read()
	{
		scanf(I64 I64, &x, &y);
	}
};

ll triangle(pt & a, pt & b, pt & c)
{
	return abs((b - a) * (c - b));
}

int main()
{
	#ifdef fn
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	pt N, a, b, c;
	a.read(), b.read(), c.read();
	N.read();
	ll A = triangle(a, b, N);
	ll B = triangle(c, a, N);
	ll C = triangle(b, c, N);
	if ((triangle(a, b, c) == A + B + C))
		puts("IN");
	else
		puts("OUT");
}
