#include <bits/stdc++.h>

using namespace std;

typedef long long  ll;
typedef unsigned long long ull;
typedef map <int, int> mii;
typedef pair <int, int> pii;
typedef pair <ll, ll> pll;

int const maxn = 110;
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

int dp[maxn][maxn];
char s[maxn];
int n;

int rec(int l, int r)
{
	//cerr << l << " " << r << '\n';
	if (l == r)
		return 1;
	if (l > r)
		return 0;
	if (l + 1 == r)
	{
		 if ((s[l] == '(' && s[r] == ')') || (s[l] == '[' && s[r] == ']') || (s[l] == '{' && s[r] == '}'))
		 	return 0;
		 return 2;
	}
	int & ans = dp[l][r];
	if (ans != -1)
		return ans;
	ans = inf;
	if ((s[l] == '(' && s[r] == ')') || (s[l] == '[' && s[r] == ']') ||	(s[l] == '{' && s[r] == '}'))
		ans = min(ans, rec(l + 1, r - 1));
	for (int i = l; i < r; i++)
		ans = min(ans, rec(l, i) + rec(i + 1, r));
	return ans;
}

int main()
{
	#ifdef LOCAL
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	scanf("%s", s);
	n = strlen(s);
	memset(dp, -1, sizeof(dp));
	printf("%d", rec(0, n - 1));
}
