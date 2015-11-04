
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
	int d = (s[0] - t[0] + 26) % 26;
	for (int i = 1; i < m; i++)
		if ((s[i] - t[i] + 26) % 26 != d)
			return -1;
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
	int d = -1;
	for (int i = 0; i + m - 1 < n; i++)
	{
		d = max(d, F(s.substr(i, m)));
	}
	if (d == -1)
	{
		puts("IMPOSSIBLE");
		return 0;
	}
	for (int i = 0; i < n; i++)
		printf("%c", (s[i] - 'A' - d + 26) % 26 + 'A');
}
