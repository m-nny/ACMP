
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
//#define fn

int n, a[maxn], k;
pii dp[maxn][maxn];

bool f(int x)
{
	int cur = 0, cnt = 1;
	for (int i = 1; i <= n; i++)
	{
		if (cur + a[i] <= x)
			cur += a[i];
		else
		{
			cur = a[i];
			cnt++;
		}
	}
	return cnt <= k;
}

int main()
{
	#ifdef fn
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
		scanf("%d", a + i);
	scanf("%d", &k);
	int l = 0, r = inf;
	while (r - l > 1)
	{
		int m = (l + r) >> 1;
		if (f(m))
			r = m;
		else
			l = m;
	}
	printf("%d", r);
}
