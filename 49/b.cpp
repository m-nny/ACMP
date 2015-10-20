
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

int f(char a, char b)
{
	if (a > b)
		swap(a, b);
	if ('0' <= a && a <= '9')
	{
		if ('0' <= b && b <= '9')
			return a == b;
		if (b == '?')
			return 1;
		return (b - 'a' <= a && a <= b - 'a' + 3);
	}
	if (a == '?')
		return b == '?' ? 10 : 4;
	return max(0, 4 - b + a);
}

char a[10], b[10];

int main()
{
	#ifdef LOCAL
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	scanf("%s\n%s", a, b);
	int n = strlen(a);
	ll ans = 1;
	for (int i = 0; i < n; i++)
		ans *= f(a[i], b[i]);
	printf(I64, ans);
}
