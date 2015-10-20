
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

int dp[110][110];

int rec(int n, int last)
{
	if (n == 0)
		return 1;
	int & ans = dp[n][last];
	if (ans != -1)
		return ans;
	ans = 0;
	for (int i = last + 1; i <= n; i++)
		ans += rec(n - i, i);
	return ans;
}

int main()
{
	#ifdef LOCAL
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	memset(dp, -1, sizeof(dp));
	int n;
	scanf("%d", &n);
	printf("%d", rec(n, 0));
}
