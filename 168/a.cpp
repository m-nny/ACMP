
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

string f(int x)
{
	string a = "";
	while (x)
		a += x % 10 + '0', x /= 10;
	reverse(all(a));
	return a;
}

int main()
{
	#ifdef LOCAL
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
		t += f(i);
	s = f(n);
	int m = s.length();
	for (int i = 0; i + m - 1 < int(t.length()); i++)
		if (t.substr(i, m) == s)
		{
			printf("%d", i + 1);
			return 0;
		}
}
