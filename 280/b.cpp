
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
//#define LOCAL

bool prime(ll x)
{
	for (ll i = 2; i * i <= x; i++)
		if (x % i == 0)
			return 0;
	return 1;
}

ll x, ans = 1;

int main()
{
	#ifdef LOCAL
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	scanf(I64, &x);
	for (ll i = 2; i < 1010ll; i++)
		if (x % i == 0 && prime(i))
		{
			 ll cur = 0;
			 while (x % i == 0)
			 	 x /= i, cur++;
			 ans *= cur;
		}
	printf(I64, ans);
}
