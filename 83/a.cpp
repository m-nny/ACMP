
#include <bits/stdc++.h>

using namespace std;

typedef long long  ll;
typedef unsigned long long ull;
typedef map <int, int> mii;
typedef pair <int, int> pii;
typedef pair <ll, ll> pll;

int const maxn = 7;
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
#define in(x, mask) (((1 << (x)) & (mask)) > 0)
//#define fn "tilings"

int n, m, full;
ll dp[32][1 << maxn];

bool good(int cur_mask, int prev_mask)
{
	for (int i = 1; i < n; i++)
	{
		int white = in(i - 1, cur_mask) + in(i, cur_mask) + in(i - 1, prev_mask) + in(i, prev_mask);
		if (white == 4 || white == 0)
			return false;
	}
	return true;
}

int main()
{
	#ifdef fn
		freopen(fn".in", "r", stdin);
		freopen(fn".out", "w", stdout);
	#endif
	scanf("%d%d", &n, &m);
	if (n > m)
		swap(n, m);
	full = (1 << n);
	for (int mask = 0; mask < full; mask++)
		dp[1][mask] = 1;
	/*
	for (int i = 1; i <= n; i++)
		printf(I64 " ", dp[1][i]);
	puts("");
	*/
	for (int i = 2; i <= m; i++)
		for (int cur_mask = 0; cur_mask < full; cur_mask++)
		{
			for (int prev_mask = 0; prev_mask < full; prev_mask++)
			{
				if (good(cur_mask, prev_mask))
				{
					dp[i][cur_mask] += dp[i - 1][prev_mask];
				}
			}
			//printf("%d %d " I64 "\n", i, cur_mask, dp[i][cur_mask]);
		}
	ll ans = 0ll;
	for (int mask = 0; mask < full; mask++)
		ans += dp[m][mask];
	/*
	for (int mask = 0; mask < full; mask++)
	{
		printf("%d " I64 ": ", mask, dp[m][mask]);
		for (int i = 0; i < n; i++)
			printf("%d ", in(i, mask));
		puts("");
	}
	*/
	printf(I64, ans);
}
