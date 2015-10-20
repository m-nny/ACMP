
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
#define end MyLittleEnd
#define all(x) x.begin(), x.end()
#define LOCAL

int next[257][10010], sz;
bool end[10010];

void add(char * s)
{
	int v = 0, m = strlen(s);
	for (int i = 0; i < m; i++)
	{
		if (!next[s[i]][v])
			next[s[i]][v] = ++sz;
		v = next[s[i]][v];
	}
	end[v] = 1;
	assert(sz < 10010);
}

bool find(char * s)
{
	int v = 0, n = strlen(s);
	for (int i = 0; i < n; i++)
	{
		if (!next[s[i]][v])
			return 0;
		v = next[s[i]][v];
		if (end[v])
			return 1;
	}
	return 0;
}

char a[1010], b[101], c[101];
int n, m, ans;

int main()
{
	#ifdef LOCAL
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	scanf("%s\n%s", a, b);
	n = strlen(a), m = strlen(b);
	for (int j = 0; j < m; j++)
	{
		for (int i = j; i < m; i++)
			c[i - j] = b[i];
		for (int i = 0; i < j; i++)
			c[i + m - j] = b[i];
		//puts(c);
		add(c);
	}
	for (int i = 0; i < n - m + 1; i++)
	{
		for (int j = 0; j < m; j++)
			c[j] = a[i + j];
		c[m] = 0;
		//printf("%s %d\n", c, find(c));
		ans += find(c);
	}
	printf("%d", ans);
}
