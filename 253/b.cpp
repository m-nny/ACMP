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
#define fn

int a, b, c, x, y;

int main()
{
	#ifdef fn
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	scanf("%d%d%d%d", &x, &a, &y, &b);
	a += x * 60;
	b += y * 60;
	if (b < a)
		b += 24 * 60;
	while (a < b)
	{
		if (a % 60 == 0)
			c += ((a / 60 + 11) % 12 + 1);
		if (a % 60 == 30)
			c++;
		a++;
	}
	printf("%d", c);
}
