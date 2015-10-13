
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
#define all(x) x.begin(), x.end()
#define next MyLittleNext
//#define end MyLittleEnd
//#define LOCAL

ll bp(ll a, ll n)
{
	ll res = 1;
	while (n)
	{
		if (n & 1)
			res *= a;
		a *= a;
		n >>= 1;
	}
	return res;
}

void out(ll x)
{
	map <ll, int> cnt;
	for (ll i = 2; i * i <= x; i++)
		while (x % i == 0)
			cnt[i]++, x /= i;
	if (x > 1)
		cnt[x]++;
	printf(I64 "\n", x);
	for (auto x : cnt)
		printf(I64 "**%d\n", x.F, x.S);
	puts("");
}

bool check(ll a, ll n)
{
	ll res = 1;
	for (int i = 0; i < n; i++)
	{
		if (res * n % a == 0)
		{
			printf("%d " I64, i, res);
			return 1;
		}
		res = (res * n) % a;
	}
	return !res;
}

int main()
{
	#ifdef LOCAL
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	ll a, n;
	scanf(I64 I64, &a, &n);
	puts(check(a, n) ? "YES" : "NO");
}
