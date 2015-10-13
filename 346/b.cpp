
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

int a[10], x, y, z, b[10], c[10];

int main()
{
	#ifdef LOCAL
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	scanf("%d%d%d", &x, &y, &z);
	int sz = 0;
	while (x)
		a[sz++] = x % 10, x /= 10;
	while (y)
		b[y % 10]++, y /= 10;
	sort(a, a + sz);
	do
	{
		x = 0;
		for (int i = 0; i < sz; i++)
			x = x * 10 + a[i];
		//printf("%d %d %d\n", x, y, z);
		if (x > z)
			continue;
		memset(c, 0, sizeof(c));
		y = z - x;
		while (y)
			c[y % 10]++, y /= 10;
		bool ok = c[0] <= b[0];
		for (int i = 1; i < 10; i++)
			if (c[i] != b[i])
				ok = false;
		if (ok)
		{
			printf("YES\n%d %d", x, z - x);
			return 0;
		}
	} while (next_permutation(a, a + sz));
	puts("NO");
}
