
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

int dp[1010][1010];
vector <int> v;

int rec(int n, int last)
{
	if (!n)
		return 1;
	int & ans = dp[n][last];
	if (ans != -1)
		return ans;
	ans = 0;
	for (int i = 0; i <= last && v[i] <= n; i++)
		ans += rec(n - v[i], i);
	return ans;
}

int main()
{
	#ifdef fn
		freopen(fn ".in", "r", stdin);
		freopen(fn ".out", "w", stdout);
	#endif
	int n;
	memset(dp, -1, sizeof(dp));
	scanf("%d", &n);
	v.pb(1);
	while (v.back() * 2 <= n)
		v.pb(v.back() * 2);
	printf("%d", rec(n, v.size() - 1));
}
