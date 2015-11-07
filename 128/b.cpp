
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

int di[] = {1, -1, 1, -1, 2, -2, 2, -2};
int dj[] = {2, -2, -2, 2, 1, -1, -1, 1};
int us[40][40], a, b, c, d, n, h, t;
pii q[1660];

int main()
{
	#ifdef LOCAL
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	scanf("%d%d%d%d%d", &n, &a, &b, &c, &d);
	memset(us, -1, sizeof(us));
	us[a][b] = 0;
	q[t++] = mp(a, b);
	while (h < t)
	{
		int x = q[h].F, y = q[h++].S;
		if (x == c && y == d)
			break;
		for (int i = 0; i < 8; i++)
		{
			x += di[i];
			y += dj[i];
			if (1 <= x && x <= n && 1 <= y && y <= n && us[x][y] == -1)
			{
				us[x][y] = us[x - di[i]][y - dj[i]] + 1;
				q[t++] = mp(x, y);
			}
			x -= di[i];
			y -= dj[i];
		}
	}
	printf("%d", us[c][d]);
}
