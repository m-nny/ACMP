
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
//#define fn ""


#define NO {puts("IMPOSSIBLE"); exit(0);}

template <typename T>
bool umax(T & a, T b)
{
	return a < b ? (a = b, 1) : 0;
}

template <typename T>
bool umin(T & a, T b)
{
	return a > b ? (a = b, 1) : 0;
}

char s[maxn], t[maxn];
int a[maxn], b[maxn], c[maxn];
int n, m;

bool check(int i) {
	if (i + m - 1 > n)
		return 0;
	for (int j = 1; j <= m; j++)
		if (a[i + j - 1] != c[j])
			return 0;
	return 1;
}

int getNext(int x, int k) {
	return (x + k) % 26;
}

int getPrev(int x, int k) {
	return (x - k + 26) % 26;
}

void YES(int k) {
	for (int i = 1; i <= n; i++)
		s[i] = getPrev(a[i], k) + 'A';
	puts(s + 1);
	exit(0);
}

int main()
{
	#ifdef fn
		freopen(fn ".in", "r", stdin);
		freopen(fn ".out", "w", stdout);
	#endif
	scanf("%s %s", s + 1, t + 1);
	n = strlen(s + 1);
	m = strlen(t + 1);
	for (int i = 1; i <= n; i++)
		a[i] = s[i] - 'A';
	for (int i = 1; i <= m; i++)
		b[i] = t[i] - 'A';
	if (n < m)
		NO;
	for (int k = 0; k < 26; k++) {
		for (int i = 1; i <= m; i++)
			c[i] = getNext(b[i], k);
		for (int i = 1; i <= n; i++)
			if (check(i))
				YES(k);
	}
	NO;
}

