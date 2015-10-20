
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

typedef vector <int> vi;
int const base = int(1e9);

vi operator += (vi & a, vi b)
{
	int carry = 0;
	for (int i = 0; i < max(int(a.size()), int(b.size())) || carry; i++)
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

vi operator +(vi a, vi b)
{
	a += b;
	return a;
}

void out(vi a)
{
	printf("%d", a.empty() ? 0 : a.back());
	for (int i = int(a.size()) - 2; i >= 0; i--)
		printf("%09d", a[i]);
}

int n, k;
vi dp[350];

int main()
{
	
	#ifdef LOCAL
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	
	scanf("%d%d", &k, &n);
	dp[0] = vi(1, 1);
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= min(i, k); j++)
			dp[i] += dp[i - j];
	/*
	for (int i = 0; i <= n; i++)
	{
		out(dp[i]);
		printf(" ");
	}
	*/
	out(dp[n]);
}
