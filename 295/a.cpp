
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

string s, t;
int n, m;

int F(string s)
{
	int d = (t[0] - s[0] + 26) % 26;
	for (int i = 1; i < m; i++)
		if ((t[i] - s[i] + 26) % 26 != d)
			return inf;
	return d;	
}

int main()
{
	#ifdef LOCAL
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	cin >> s >> t;
	n = int(s.length());
	m = int(t.length());
	int d = inf;
	for (int i = 0; i + m - 1 < n; i++)
		d = min(d, F(s.substr(i, m)));
	if (d == inf)
	{
		puts("IMPOSSIBLE");
		return 0;
	}
	for (int i = 0; i < n; i++)
		printf("%c", (s[i] - 'A' + d + 26) % 26 + 'A');
}
