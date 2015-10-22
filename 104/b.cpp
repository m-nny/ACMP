
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

char s[300], t[300];
int n, m, dp[300][300];

int rec(int i, int j)
{
	if (i == n && j == m)
		return 1;
	if ((i == n) ^ (j == m))
		return 0;
	int & ans = dp[i][j];
	if (ans != -1)
		return ans;
	ans = 0;
	if (t[j] == '?')
		return ans = rec(i + 1, j + 1);
	if ('A' <= t[j] && t[j] <= 'Z')
		return ans = ((s[i] == t[j]) && rec(i + 1, j + 1));
	if (t[j] == '*')
	{
		for (int k = i; k <= n; k++)
			if (rec(k, j + 1))
				return ans = 1;
	}
	return ans = 0;
}

int main()
{
	#ifdef LOCAL
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	memset(dp, -1, sizeof(dp));
	scanf("%s\n%s", s, t);
	n = strlen(s);
	m = strlen(t);
	bool ok = 1;
	for (int i = 0; i < n; i++)
		if (s[i] < 'A' || 'Z' < s[i])
			ok = 0;
	if (!ok)
	{
		for (int i = 0; i < max(n, m); i++)
			swap(s[i], t[i]);
		swap(n, m);
	}
	puts(rec(0, 0) ? "YES" : "NO");
}
