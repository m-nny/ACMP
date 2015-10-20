
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

char * S(int t)
{
	char * s = new char[8];
	int m = t / 60;
	t %= 60;
	int h = m / 60;
	m %= 60;
	sprintf(s, "%02d%02d%02d", h, m, t);
	return s;
}

int I(char * s)
{
	int h, m, t;
	sscanf(s, "%d:%d:%d", &h, &m, &t);
	m += h * 60;
	t += m * 60;
	return t;
}

int cnt[10];

int main()
{
	#ifdef LOCAL
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	int l, r;
	char * s = new char[8];
	scanf("%s", s);
	l = I(s);
	scanf("%s", s);
	r = I(s);
	for (; l <= r; l++)
	{
		s = S(l);
		for (int i = 0; i < 6; i++)
			cnt[s[i] - '0']++;
	}
	for (int i = 0; i < 10; i++)
		printf("%d\n", cnt[i]);
}
