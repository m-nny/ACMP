
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
int B[4], t;

int rec(int a, int b, int c)
{
	if (a == t)
		return 0;
	int & ans = dp[a][b];
	if (ans != -1)
		return ans;
	ans = inf;
	int del = min(a, B[2] - b);
	if (del)
		ans = min(ans, rec(a - del, b + del, c) + 1);
	del = min(b, B[1] - a);
	if (del)
		ans = min(ans, rec(a + del, b - del, c) + 1);
	del = min(a, B[3] - c);
	if (del)
		ans = min(ans, rec(a - del, b, c + del) + 1);
	del = min(c, B[1] - a);
	if (del)
		ans = min(ans, rec(a + del, b, c - del) + 1);
	del = min(b, B[3] - c);
	if (del)
		ans = min(ans, rec(a, b - del, c + del) + 1);
	del = min(c, B[2] - b);
	if (del)
		ans = min(ans, rec(a, b + del, c - del) + 1);
	return ans;
}

int main()
{
	#ifdef fn
		freopen(fn ".in", "r", stdin);
		freopen(fn ".out", "w", stdout);
	#endif
	scanf("%d%d%d%d", B + 1, B + 2, B + 3, &t);
	memset(dp, -1, sizeof(dp));
	int x = rec(B[1], 0, 0);
	if (x == inf)
		puts("IMPOSSIBLE");
	else
		printf("%d", x);
}
