
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef map <int, int> mii;
typedef pair <int, int> pii;
typedef pair <ll, ll> pll;

int const maxn = int(2e8 + 12);
int const maxlen = int(1e7 + 12);
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

int base;
int f(char x) {
	int ans = -1;
	if ('0' <= x && x <= '9')
		ans = x - '0';
	if ('A' <= x && x <= 'Z')
		ans = x - 'A' + 10;
	if ('a' <= x && x <= 'z')
		ans = x - 'a' + 10;
	assert(ans >= 0);
	return ans;
}

char s[maxn];
int n, x;

bool check() {
	ll y = 0ll;
	for (int i = 0; i < n; i++) {
		y = y * base + f(s[i]);
		if (y > x || y >= maxlen)
			return 0;
	}
	return x == y;
}

int main()
{
	#ifdef fn
		freopen(fn ".in", "r", stdin);
		freopen(fn ".out", "w", stdout);
	#endif
	scanf("%s", s);
	scanf(" %d", &x);
	n = strlen(s);
	/*
	if (n >= maxlen) {
		puts("0");
		return 0;
	}
	*/
	int minBase = 1;
	for (int i = 0; i < n; i++)
		umax(minBase, f(s[i]));
	minBase++;
//	printf("%d\n", minBase);
	for (base = minBase; base < 37; base++) {
		if (check()) {
			printf("%d\n", base);
			return 0;
		}
	}
	puts("0");
	return 0;
}

