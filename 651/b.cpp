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

map <int, int> m;
int a, b;

int main()
{
	#ifdef fn
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	scanf("%d%d", &a, &b);
	for (int i = 2; i * i <= a; i++)
		while (a % i == 0)
			m[i]++, a /= i;
	if (a > 1)
		m[a]++;
	for (int i = 2; i * i <= b; i++)
		while (b % i == 0)
			m[i]--, b /= i;
	if (b > 1)
		m[b]--;
	int ans = 0;
	for (pii x : m)
		ans += abs(x.S);
	printf("%d", ans);
}
