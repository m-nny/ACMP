
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
int a, b, cnt;
char s[50][50], t[250][250];

bool check(int x, int y)
{
	if (x + n - 1 > a || y + m - 1 > b)
		return false;
	for (int i = 1; i <= a; i++)
		for (int j = 1; j <= b; j++)
			if (s[i][j] == '#' && t[x + i - 1][y + j - 1] == '.')
				return false;
	//printf("%d %d\n", x, y);
	return true;
}

int main()
{
	#ifdef LOCAL
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i++)
		scanf("%s", s[i] + 1);
	scanf("%d%d", &a, &b);
	for (int i = 1; i <= a; i++)
		scanf("%s", t[i] + 1);
	for (int i = 1; i + n - 1 <= a; i++)
		for (int j = 1; j + m - 1 <= b; j++)
			cnt += check(i, j);
	printf("%d", cnt);
}
