
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

struct pt
{
	int x, y;
	pt()
	{
		x = y = 0;
	}
	pt (int a, int b)
	{
		x = a;
		y = b;
	}
	pt(int)
	{
		scanf("%d%d", &x, &y);
	}
	pt operator - (pt b)
	{
		return pt(x - b.x, y - b.y);
	}
	pt operator + (pt b)
	{
		return pt(x + b.x, y + b.y);
	}
	ll operator % (const pt & p) const
	{
		return x * p.x + y * p.y;
	}
	void out()
	{
		printf("%d %d\n", x, y);
	}
};

bool operator < (pt a, pt b)
{
	return a.x != b.x ? a.x < b.x : a.y < b.y;
}

pt a[3];

int main()
{
	#ifdef LOCAL
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	a[0] = pt(1);
	a[1] = pt(1);
	a[2] = pt(1);
	//(a[1] - a[0]).out();
	//(a[2] - a[1]).out();
	sort(a, a + 3);
	while ((a[1] - a[0]) % (a[2] - a[1]))
		next_permutation(a, a + 3);
	a[3] = a[2] - a[1] + a[0];
	printf("%d %d", a[3].x, a[3].y);
}
