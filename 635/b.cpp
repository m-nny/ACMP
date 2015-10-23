
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

struct team
{
	int id, all, t;
	team()
	{
		id = all = t = 0;
	}
	team(int a, int b, int c)
	{
		id = a;
		all = b;
		t = c;
	}
	team(int)
	{
		scanf("%d%d%d", &id, &all, &t);
	}
};

bool operator < (team a, team b)
{
	return a.all != b.all ? a.all > b.all : a.t < b.t;
}

int n, m;
team a[1010], b[1010];
vector <int> ans;

int main()
{
	#ifdef LOCAL
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i++)
		a[i] = team(1);
	for (int i = 1; i <= m; i++)
		b[i] = team(1);
	sort(a + 1, a + 1 + n);
	sort(b + 1, b + 1 + m);
	while (n && !a[n].all)
		n--;
	for (int i = 1; i <= n; i++)
		if (a[i].all && (a[i].all == a[1].all || (a[i].all > a[n / 2].all)))
			ans.pb(a[i].id);
	for (int i = 1; i <= m; i++)
		if (b[i].all)
			ans.pb(b[i].id);
	printf("%d\n", ans.size());
	sort(all(ans));
	for (int x : ans)
		printf("%d ", x);
}
