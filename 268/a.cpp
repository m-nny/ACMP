
#include <bits/stdc++.h>

using namespace std;

typedef long long  ll;
typedef unsigned long long ull;
typedef map <int, int> mii;
typedef pair <int, int> pii;
typedef pair <ll, ll> pll;

int const maxn = 5050;
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

char s[maxn];
short dp[maxn][maxn];
int n, k;

short rec(int l, int r)
{
	if (l == r)
		return 0;
	if (l > r)
		return inf;
	if (l + 1 == r)
		return !(s[l] == s[r]);
	short & ans = dp[l][r];
	if (ans != -1)
		return ans;
	if (s[l] == s[r])
		return ans = rec(l + 1, r - 1);
	return ans = rec(l + 1, r - 1) + 1;
}

int main()
{
	#ifdef fn
		freopen(fn ".in", "r", stdin);
		freopen(fn ".out", "w", stdout);
	#endif
	scanf("%d%d", &n, &k);
	scanf("%s", s + 1);
	memset(dp, -1, sizeof(dp));
	int ans = 0;
	for (int i = 1; i <= n; i++)
		for (int j = i; j <= n; j++)
			if (rec(i, j) <= k)
			{
				//printf("[%d %d] = %d\n", i, j, rec(i, j));
				ans++;
			}
	printf("%d\n", ans);
}
