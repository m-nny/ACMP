
#include <bits/stdc++.h>

using namespace std;

typedef long long  ll;
typedef unsigned long long ull;
typedef map <int, int> mii;
typedef pair <int, int> pii;
typedef pair <ll, ll> pll;

int const maxn = 265;
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

int n, m, p, ans;
int a[maxn], b[maxn];
int mx[maxn], mn[maxn];

int main()
{
	#ifdef fn
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	scanf("%d%d%d", &n, &m, &p);
	for (int i = 1; i <= n; i++)
		mx[i] = -inf;
	for (int i = 1; i <= n; i++)
		mn[i] = inf;
	for (int i = 1; i <= p; i++)
	{
		scanf("%d%d", a + i, b + i);
		ans += (b[i] > mn[a[i]]) || (b[i] < mx[a[i]]);
		for (int j = a[i] + 1; j <= n; j++)
			mx[j] = max(mx[j], b[i]);
		for (int j = 1; j < a[i]; j++)
			mn[j] = min(mn[j], b[i]);
	}
	printf("%d", ans);
}

