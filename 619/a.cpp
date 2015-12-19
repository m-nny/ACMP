
#include <bits/stdc++.h>

using namespace std;

typedef long long  ll;
typedef unsigned long long ull;
typedef map <int, int> mii;
typedef pair <int, int> pii;
typedef pair <ll, ll> pll;

int const maxn = 505;
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
#define fn

double dp[maxn][6 * maxn];

double rec(int n, int sum)
{
	if (n * 6 < sum || n > sum)
		return .0;
	if (n == 1)
		return 1.0 / 6;
	double & ans = dp[n][sum];
	if (ans >= .0)
		return ans;
	ans = .0;
	for (int i = 1; i <= min(sum, 6); i++)
		ans += rec(n - 1, sum - i) / 6.0;
	return ans;
}

int main()
{
	#ifdef fn
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	int n, m;
	scanf("%d%d", &n, &m);
	for (int i = 0; i <= n; i++)
		for (int j = 0; j <= m; j++)
			dp[i][j] = -1.0;
	printf("%.8f", rec(n, m));
}

