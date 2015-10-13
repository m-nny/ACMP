
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

struct event
{
	ll x;
	bool open;
	event()
	{
		x = 0;
		open = false;
	}
	event(ll a, bool o)
	{
		x = a;
		open = o;
	}
};

bool cmp(event a, event b)
{
	if (a.x == b.x)
	{
		if (a.open != b.open)
			return a.open;
		return 1;
	}
	return a.x <= b.x;
}

vector <event> v;

int main()
{
	#ifdef LOCAL
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		ll l, r;
		scanf(I64 I64, &l, &r);
		if (l > r)
			continue;
		v.pb(event(l, 1));
		v.pb(event(r, 0));
	}
	sort(all(v), cmp);
	ll bal = 0, f = -linf;
	ll ans = 0ll;
	for (int i = 0; i < int(v.size()); i++)
	{
		//printf(I64 " " I64 " " I64 " %d\n", bal, f, v[i].x, v[i].open);
		if (v[i].open)
		{
			bal++;
			if (f == -linf)
				f = v[i].x;
		}
		else
		{
			bal--;
			if (!bal)
			{
				ans += v[i].x - f;
				f = -linf;
			}
		}
	}
	printf(I64, ans);
}
