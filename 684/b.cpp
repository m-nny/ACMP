
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
#define NO {puts("NO"); exit(0);}
#define YES {puts("YES"); exit(0);}

int a, b, c, d;
int us[10][10];

int main()
{
	#ifdef LOCAL
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	char x, y;
	scanf("%c%d %c%d", &x, &b, &y, &d);
	a = x - 'a' + 1;
	c = y - 'a' + 1;
	swap(a, b);
	swap(c, d);
	us[a][b] = 1;
	for (int i = 1; i <= 8; i++)
		for (int j = 1; j <= 8; j++)
			if (us[i][j])
			{
				if (i <= 7 && j <= 7)
					us[i + 1][j + 1] = 1;
				if (i <= 7 && j >= 2)
					us[i + 1][j - 1] = 1;
			}
	/*
	us[a][b] = 2;
	us[c][d] = 3;
	for (int i = 1; i <= 8; i++)
	{
		for (int j = 1; j <= 8; j++)
			printf("%d", us[i][j]);
		puts("");
	}
	*/
	puts(us[c][d] ? "YES" : "NO");
}
