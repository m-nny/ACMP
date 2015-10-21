
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

int n, m;
char a[150][150];
int x1, x2, y1, y2;

int main()
{
	#ifdef LOCAL
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i++)
		scanf("%s", a[i] + 1);
	x1 = y1 = inf;
	x2 = y2 = -inf;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			if (a[i][j] == '*')
			{
				x1 = min(x1, j);
				x2 = max(x2, j);
				y1 = min(y1, i);
				y2 = max(y2, i);
			}
	for (int i = y1; i <= y2; i++)
		for (int j = x1; j <= x2; j++)
			a[i][j] = '*';
	for (int i = 1; i <= n; i++)
		puts(a[i] + 1);
}
