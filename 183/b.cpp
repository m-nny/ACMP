
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

int n, p;
ll dp[maxn], pp;

int main()
{
	#ifdef LOCAL
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	scanf("%d%d", &n, &p);
	pp = p * 1ll * p;
	dp[2] = 1;
	for (int i = 1; i <= n; i++)
	{
		if (i + 1 <= n)
			dp[i + 1] = (dp[i + 1] + dp[i] + pp) % p;
		if (i * 2 <= n)
			dp[i * 2] = (dp[i * 2] + dp[i] + pp) % p;
	}
	printf(I64, dp[n]);
}
