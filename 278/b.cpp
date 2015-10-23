
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

string s, t;
int n, m;
set <int> pos[5];

inline int F(char c)
{
	if (c == 'G')
		return 0;
	if (c == 'T')
		return 1;
	if (c == 'A')
		return 2;
	if (c == 'C')
		return 3;
	return 4;
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
	for (int i = 0; i < m; i++)
		pos[F(t[i])].insert(i);
	int j = 0;
	for (int i = 0; i < n; i++)
	{
		auto it = pos[F(s[i])].lower_bound(j);
		if (it == pos[F(s[i])].end())
		{
			puts("NO");
			return 0;
		}
		j = (*it) + 1;
	}
	puts("YES");
}
