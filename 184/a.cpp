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

int DD[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

ll a[5050];

ll parse()
{
	ll D, M, h, m;
	scanf(I64 "." I64 ". " I64 ":" I64, &D, &M, &h, &m);
	M--;
	h -= 8;
	for (int i = 0; i < M; i++)
		D += DD[i];
	h += (D - 1) * 8;
	m += h * 60;
	return m;
}

void out(ll ans)
{
	printf(I64 ":", ans / 60);
	if (ans % 60 < 10)
		putchar('0');
	printf(I64 "\n", ans % 60);
}

int n;

int main()
{
	#ifdef fn
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
		a[i] = parse();
	sort(a + 1, a + 1 + n);
	ll ans = 0;
	for (int i = 1; i <= n; i += 2)
	{
		ans += a[i + 1] - a[i] + 1;
		//out(a[i + 1] - a[i] + 1);
	}
	out(ans);
}
