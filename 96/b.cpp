
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
int X, Y;
int us[110][110];

int main()
{
	#ifdef LOCAL
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	scanf("%d%d%d%d", &n, &m, &Y, &X);
	int x = 1, y = 1, ans = 1, dir = 0;
	us[1][1] = 1;
	while (x != X || y != Y)
	{
		/*
		printf("[%d %d] %d\n", x, y, dir);
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= m; j++)
				printf("%d", us[i][j]);
			puts("");
		}
		puts("");
		*/
		if (dir == 4)
			dir -= 4;
		if (dir == 0)
		{
			x++;
			while (!us[y][x] && !(x == X && y == Y) && x <= m)
			{
				us[y][x] = 1;
				x++, ans++;
			}
			if (x == X && y == Y)
				break;
			x--;
			dir++;
			continue;
		}
		if (dir == 1)
		{
			y++;
			while (!us[y][x] && !(x == X && y == Y) && y <= n)
			{
				us[y][x] = 1;
				y++, ans++;
			}
			if (x == X && y == Y)
				break;
			y--;
			dir++;
			continue;
		}
		if (dir == 2)
		{
			x--;
			while (x > 0 && !us[y][x] && !(x == X && y == Y))
			{
				us[y][x] = 1;
				x--, ans++;
			}
			if (x == X && y == Y)
				break;
			x++;
			dir++;
			continue;
		}
		if (dir == 3)
		{
			y--;
			while (y > 0 && !us[y][x] && !(x == X && y == Y))
			{
				us[y][x] = 1;
				y--, ans++;
			}
			if (x == X && y == Y)
				break;
			y++;
			dir++;
			continue;
		}
	}
	printf("%d", ans + (X != 1 || Y != 1));
}
