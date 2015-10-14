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

int DD[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

struct Time
{
	int D, M, h, m;
	Time()
	{
		D = M = h = m = 0;
	}
	Time(int)
	{
		scanf("%d.%d. %d:%d", &D, &M, &h, &m);
		M--;
		h -= 10;
	}
	void out()
	{
		printf("%d.%d %d:%d\n", D, M, h, m);
	}
} a[5050];

Time operator -= (Time &l, Time r)
{
	l.m -= r.m - 1;
	while (l.m < 0)
		l.m += 60, l.h--;
	l.h -= r.h;
	while (l.h < 0)
		l.h += 8, l.D--;
	l.D -= r.D;
	while (l.D < 0)
		l.D += DD[--l.M];
	l.M -= r.M;
	return l;
}

Time operator - (Time l, Time r)
{
	l -= r;
	return l;
}

Time operator += (Time &l, Time r)
{
	if (l.M--)
		l.D += DD[l.M];
	l.h += l.D * 8;
	l.M = l.D = 0;
	
	if (r.M--)
		r.D += DD[r.M];
	r.h += r.D * 8;
	r.M = r.D = 0;
	
	l.m += r.m;
	while (l.m >= 60)
		l.m -= 60, l.h++;
	l.h += r.h;
	return l;
}

Time operator + (Time l, Time r)
{
	l += r;
	return r;
}

bool cmp(Time a, Time b)
{
	if (a.M != b.M)
		return a.M < b.M;
	if (a.D != b.D)
		return a.D < b.D;
	if (a.h != b.h)
		return a.h < b.h;
	return a.m < b.m;	
}

int n;

int main()
{
	#ifdef fn
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		a[i] = Time(1);
	}
	sort(a + 1, a + n + 1, cmp);
	/*
	for (int i = 1; i <= n; i++)
		a[i].out();
	puts("");
	*/
	for (int i = 1; i <= n; i += 2)
	{
		Time c = (a[i + 1] - a[i]);
		a[0] += c;
	}
	printf("%d:", a[0].h);
	if (a[0].m < 10)
		putchar('0');
	printf("%d", a[0].m);
}
