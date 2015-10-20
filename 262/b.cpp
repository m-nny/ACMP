
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

int n;
ll a[maxn];

pair <ll, double> rec(int l, int r)
{
	if (l == r)
		return mp(a[l], .0);
	/*
	if (l + 1 == r)
		return mp(a[l] + a[r], (a[l] + a[r]) * 0.05);
	*/
	int tm = (l + r) >> 1;
	auto L = rec(l, tm);
	auto R = rec(tm + 1, r);
	return mp(L.F + R.F, (L.F + R.F) * 0.05 + L.S + R.S);
}

int main()
{
	#ifdef LOCAL
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
		scanf(I64, a + i);
	sort(a + 1, a + 1 + n);
	auto x = rec(1, n);
	printf("%.2f", x.S);
}
