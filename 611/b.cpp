
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

int n;

bool check(char * * s)
{
	do
	{
		bool ok = 1;
		for (int i = 0; i < n; i++)
			for (int j = 0; j < i; j++)
				if (s[i][j] != s[j][i])
					ok = 0;
		if (ok)
			return 1;
	} while (next_permutation(s, s + n));
	return 0;
}

char t[30][30];
char **a , **b;

int main()
{
	#ifdef LOCAL
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	scanf("%d", &n);
	for (int i = 0; i < 2 * n; i++)
		scanf("%s", t[i]);
	a = new char *[n + 1];
	b = new char *[n + 1];
	for (int i = 0; i < n; i++)
	{
		a[i] = new char[n + 1];
		b[i] = new char[n + 1];
	}
	int cnt = 0;
	do
	{
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				a[i][j] = t[i][j];
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				b[i][j] = t[n + i][j];
		if (check(a) && check(b))
		{
			for (int i = 0; i < n; i++)
				puts(a[i]);
			puts("");
			for (int i = 0; i < n; i++)
				puts(b[i]);
			return 0;
		}
	} while (next_permutation(t, t + n + n));
}
