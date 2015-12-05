
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
//#define fn ""

typedef vector <int> vi;

int const base = int(1e9);

vi operator + (vi a, vi b)
{
	int carry = 0;
	for (int i = 0; carry || i < int(max(a.size(), b.size())); i++)
	{
		if (i == int(a.size()))
			a.pb(0);
		a[i] += carry + (i < int(b.size()) ? b[i] : 0);
		carry = a[i] >= base;
		if (carry)
			a[i] -= base;
	}
	return a;
}

void write(vi a)
{
	printf("%d", a.empty() ? 0 : a.back());
	for (int i = int(a.size()) - 2; i >= 0; i--)
		printf("%09d", a[i]);
}

int n;
vi dp[2][maxn];

int main()
{
	#ifdef fn
		freopen(fn ".in", "r", stdin);
		freopen(fn ".out", "w", stdout);
	#endif
	scanf("%d", &n);
	dp[0][1] = dp[1][1] = vi(1, 1);
	for (int i = 2; i <= n; i++)
	{
		dp[1][i] = dp[0][i - 1];
		dp[0][i] = dp[0][i - 1] + dp[1][i - 1];
	}
	write(dp[1][n] + dp[0][n]);
}
