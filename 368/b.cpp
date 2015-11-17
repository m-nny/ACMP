
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

int n;
char s[260][260];
int dp[260][260];
bool a[260][260];
pii p[260][260];

int main()
{
	#ifdef LOCAL
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			scanf(" %c", &s[i][j]), s[i][j] -= '0';
	for (int i = 1; i <= n; i++)
	for (int j = 1; j <= n; j++)
		dp[i][j] = inf;
	dp[1][1] = s[1][1];
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
		{
			if (dp[i][j] + s[i + 1][j] < dp[i + 1][j])
			{
				//printf("%d %d -> %d %d\n", i, j, i + 1, j);
				p[i + 1][j] = mp(i, j);
				dp[i + 1][j] = dp[i][j] + s[i + 1][j];
			}
			if (dp[i][j] + s[i][j + 1] < dp[i][j + 1])
			{
				//printf("%d %d -> %d %d\n", i, j, i, j + 1);
				p[i][j + 1] = mp(i, j);
				dp[i][j + 1] = dp[i][j] + s[i][j + 1];
			}
	    }
    pii x = mp(n, n);
    while (x != mp(1, 1))
    {
    	a[x.F][x.S] = 1;
    	x = p[x.F][x.S];
    	//printf("%d %d\n", x.F, x.S);
    }
    a[1][1] = 1;
    for (int i = 1; i <= n; i++)
    {
    	for (int j = 1; j <= n; j++)
    		printf("%c", a[i][j] ? '#' : '.');
    	puts("");
    }
    /*
    for (int i = 1; i <= n; i++)
    {
    	for (int j = 1; j <= n; j++)
    		printf("%d ", dp[i][j]);
    	puts("");
    }
    */
}
