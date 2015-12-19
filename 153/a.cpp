
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
//#define fn

int n, s, a[16];

int rec(int s, int i)
{
	if (!s)
		return 0;
	if (i == n + 1)
		return inf;
	int ans = inf;
	for (int j = 0; j < 3 && a[i] * j <= s; j++)
		ans = min(ans, rec(s - a[i] * j, i + 1) + j);
	return ans;
}

int main()
{
	#ifdef fn
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	scanf("%d%d", &s, &n);
	int q = 0;
	for (int i = 1; i <= n; i++)
		scanf("%d", a + i), q += a[i] * 2;
	if (q < s)
	{
		puts("-1");
		return 0;
	}
	int x = rec(s, 1);
	if (x >= inf)
		x = 0;
	printf("%d", x);
}
