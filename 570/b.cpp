
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
char s[1010][1010];
int x1 = inf, x2 = -inf, y1 = inf, y2 = -inf;

void check(int x, int y, int len)
{
	for (int i = y; i <= y + len - 1; i++)
		for (int j = x; j <= x + len - 1; j++)
			if (s[i][j] == '.')
				return;
	/*
	for (int i = y; i <= y + len - 1; i++)
	{
		for (int j = x; j <= x + len - 1; j++)
			printf("%c", s[i][j]);
		puts("");
	}
	printf("%d %d %d\n", y, x, len);
	printf("%d %d %d %d\n", y1, x1, y2, x2);
	*/
	if ((len == 1) && (x == 0 || x == m || y == 0 || y == n))
		return;
	if ((len == 2) && ((x == 0 || x == m) && (y == 0 || y == n)))
		return;
	puts("SQUARE");
	exit(0);
}

int main()
{
	#ifdef LOCAL
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	scanf("%d%d", &n, &m);
	for (int i = 0; i < n; i++)
		scanf("%s", s[i]);
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
		{
			if (s[i][j] == '*')
			{
				x1 = min(x1, j);
				x2 = max(x2, j);
				y1 = min(y1, i);
				y2 = max(y2, i);
			}
		}
	//printf("%d %d %d %d\n", y1, x1, y2, x2);
	if (x1 == inf)
	{
		puts("CIRCLE");
		return 0;
	}
	for (int dx1 = 0; dx1 < 3; dx1++)
	for (int dx2 = 0; dx2 < 3; dx2++)
	for (int dy1 = 0; dy1 < 3; dy1++)
	for (int dy2 = 0; dy2 < 3; dy2++)
	{
		x1 += dx1;
		y1 += dy1;
		x2 -= dx2;
		y2 -= dy2;
		if (x2 >= x1 && y2 >= y1 && x2 - x1 == y2 - y1)
			check(x1, y1, x2 - x1 + 1);
		x1 -= dx1;
		y1 -= dy1;
		x2 += dx2;
		y2 += dy2;
	}
	puts("CIRCLE");
}
