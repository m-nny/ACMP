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
#define fn

struct pt
{
	int x, y;
	pt()
	{
		x = y = 0;
	}
	pt(int)
	{
		scanf("%d%d", &x, &y);
	}
	inline int d2(pt r)
	{
		return (r.x - x) * (r.x - x) + (r.y - y) * (r.y - y);
	}
};

int main()
{
	#ifdef fn
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	pt s, d, c;
	int n;
	s = pt(1);
	d = pt(1);
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		c = pt(1);
		if (4 * c.d2(s) < c.d2(d))
		{
			printf("%d", i);
			exit(0);
		}
	}
	puts("NO");
}
