
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

int k1, l1, m1, k2, l2, m2;

int main()
{
	#ifdef LOCAL
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	scanf("%d%d%d", &k1, &l1, &m1);
	scanf("%d%d%d", &k2, &l2, &m2);
	ll cost = k1 / 100 * l1 * m1 + k2 / 100 * l2 * m2;
	k1 = k1 / 100 * (100 - l1);
	k2 = k2 / 100 * (100 - l2);
	if (k1 < k2)
		cost += (k2 - k1) * m2;
	else
		cost += (k1 - k2) * m1;
	printf(I64, cost);
}
