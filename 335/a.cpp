
#include <bits/stdc++.h>

using namespace std;

typedef long long  ll;
typedef unsigned long long ull;
typedef map <int, int> mii;
typedef pair <int, int> pii;
typedef pair <ll, ll> pll;

int const maxn = int(1e3 + 12);
int const maxb = int(2e6 + 12);
int const inf = int(1e9 + 9);
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
//#define fn "a"

int n;
int dp[101][10004];
bool pr[1010];

int rec(int pos, int last)
{
	if (pos == n + 1)
		return 1;
	int & ans = dp[last][pos];
	if (ans != -1)
		return ans;
	ans = 0;
	for (int x = 0; x < 10; x++)
	{
		if (!pr[last * 10 + x] || (last * 10 + x < 100))
			continue;
		//printf("%d %d -> %d (%d)\n", pos, last, (last % 10) * 10 + x, last * 10 + x);
		ans = (ans + rec(pos + 1, (last % 10) * 10 + x)) % inf;
	}
	while (ans < 0)
		ans += inf;
	return ans;
}

int main()
{
	#ifdef fn
		freopen(fn ".in", "r", stdin);
		freopen(fn ".out", "w", stdout);
	#endif
	for (int i = 2; i < 1010; i++)
		pr[i] = 1;
	for (int i = 2; i * i < 1010; i++)
	{
		if (!pr[i])
			continue;
		for (int j = i * i; j < 1010; j += i)
			pr[j] = 0;
	}
	scanf("%d", &n);
	memset(dp, -1, sizeof(dp));
	int ans = 0;
	for (int a = 1; a <= 9; a++)
		for (int b = 0; b <= 9; b++)
			ans = (ans + rec(3, a * 10 + b)) % inf;
	printf("%d", ans);
}
