
#include <bits/stdc++.h>

using namespace std;

typedef long long  ll;
typedef unsigned long long ull;
typedef map <int, int> mii;
typedef pair <int, int> pii;
typedef pair <ll, ll> pll;

int const maxn = 330;
int const maxb = int(2e6 + 12);
int const inf = 10000;
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
//#define fn "a"

struct pt
{
	int x, y;
	pt() {};
	pt (int x, int y) : x(x), y(y) {};
	pt (pii x) : x(x.F), y(x.S) {};
	void out()
	{
		printf("%d %d\n", x, y);
	}
};

pt operator + (pt a, pt b)
{
	return {a.x + b.x, a.y + b.y};
}

pt operator - (pt a, pt b)
{
	return {a.x - b.x, a.y - b.y};
}

int operator * (pt a, pt b)
{
	return a.x * b.y - a.y * b.x;
}

pt a[maxn];
int n, sz;

bool line(pt a, pt b, pt c)
{
	return (b - a) * (c - a) == 0;
}

bool check(pt x)
{
	for (int i = 0; i < sz; i++)
		for (int j = i + 1; j < sz; j++)
			if (line(a[i], a[j], x))
				return 0;
	return 1;
}

int main()
{
	#ifdef fn
		freopen(fn ".in", "r", stdin);
		freopen(fn ".out", "w", stdout);
	#endif
	srand(time(0));
	scanf("%d", &n);
	puts("YES");
	for (int i = 1; i <= n; i++)
	{
		while (1)
		{
			int x = rand(), y = rand();
			x %= inf, y %= inf;
			if (rand() & 1)
				x *= -1;
			if (rand() & 1)
				y *= -1;
			if (check({x, y}))
			{
				printf("%d %d\n", x, y);
				a[sz++] = {x, y};
				break;
			}
		}
	}
}
