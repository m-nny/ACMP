
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
#define all(x) x.begin(), x.end()
#define next MyLittleNext
//#define end MyLittleEnd

int n, k;

int dp[2][20];

int main()
{
	#ifdef LOCAL
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	scanf("%d%d", &n, &k);
	dp[0][1] = 1;
	dp[1][1] = k - 1;
	for (int i = 2; i <= n; i++)
	{
		dp[0][i] = dp[1][i - 1];
		dp[1][i] = (k - 1) * 1ll * (dp[0][i - 1] + dp[1][i - 1]);
	}
	/*
	for (int i = 1; i <= n; i++)
		printf("%d %d\n", dp[0][i], dp[1][i]);
	*/
	printf("%d", /*dp[0][n] + */dp[1][n]);
}
