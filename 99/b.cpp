
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
#define D(XX) [XX.h][XX.x][XX.y]

int h, n, m;
char s[55][55][55];
int dist[55][55][55];
struct pt
{
	int x, y, h;
	pt()
	{
		x = y = h = 0;
	}
	pt(int a, int b, int c)
	{
		x = a;
		y = b;
		h = c;
	}
	bool operator ==(pt const & c) const
	{
		return x == c.x && y == c.y && h == c.h;
	}
};
pt Q[125050];
int Qh, Qt;

#define DO(X, Y, H) if (!dist[H][Y][X] && s[H][Y][X] != 'o') \
	 {\
	 	dist[H][Y][X] = dist[c.h][c.y][c.x] + 1;\
	 	Q[Qt++] = pt(X, Y, H);\
	 }

int main()
{
	#ifdef LOCAL
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	scanf("%d%d%d", &h, &n, &m);
	for (int i = 1; i <= h; i++)
		for (int j = 1; j <= n; j++)
			scanf("%s", s[i][j] + 1);
	int x1 = -1, y1 = -1, x2 = -1, y2 = -1;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
		{
			 if (s[1][i][j] == '1')
			 {
			 	x1 = j;
			 	y1 = i;
			 }
			 if (s[h][i][j] == '2')
			 {
			 	x2 = j;
			 	y2 = i;
			 }
		}
	pt start = pt(x1, y1, 1);
	pt finish = pt(x2, y2, h);
	dist[1][y1][x1] = 1;
	Q[Qt++] = start;
	while (Qh < Qt)
	{
		pt c = Q[Qh++];
		//cerr << c.x << " " << c.y << " " << c.h << '\n';
		if (c == finish)
		{
			printf("%d", dist[h][y2][x2] * 5 - 5);
			return 0;
		}
		if (c.x + 1 <= m)
			DO(c.x + 1, c.y, c.h)
		if (c.x >= 2)
			DO(c.x - 1, c.y, c.h)
		if (c.y + 1 <= n)
			DO(c.x, c.y + 1, c.h)
		if (c.y >= 2)
			DO(c.x, c.y - 1, c.h)
		if (c.h < h)
			DO(c.x, c.y, c.h + 1)
	}
}
