
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

ll dp[40][40];

ll rec(int pos, int k)
{
	if (!k)
		return !pos;
	if (!pos)
		return 0;
	ll & ans = dp[pos][k];
	if (ans != -1)
		return ans;
	ans = 0;
	if (k < pos)
		return ans = 0;
	ans = rec(pos + 1, k - 1) + (pos > 0 ? rec(pos - 1, k - 1) : 0);
	return ans;
}

int main()
{
	#ifdef LOCAL
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	memset(dp, -1, sizeof(dp));
	int n, k;
	scanf("%d%d", &n, &k);
	printf(I64, rec(n, k));
}
