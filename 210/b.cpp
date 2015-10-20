
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
#define all(x) x.begin(), x.end()
#define next MyLittleNext
//#define end MyLittleEnd
#define LOCAL

ll cur, x;
map <ll, int> cnt;

ll bp(ll a, ll n)
{
	ll res = 1;
	while (n)
	{
		if (n & 1)
			res *= a;
		a *= a;
		n >>= 1;
	}
	return res;
}

vector <int> P;
bool ok(ll n)
{
	int i = 0;
	for (auto x : cnt)
		if (x.S > n * P[i])
			return false;
	return true;
}

int N;
vector <ll> v;
ll ans = linf;

void rec(int x, ll now)
{
	if (x == N)
	{
		if (ok(now))
		{
			ans = min(ans, now);
		}
		return;
	}
	for (int i = 0; i < 6; i++)
	{
		P[x] = i + 1;
		rec(x + 1, now * pow(v[x], i));
	}
}

int main()
{
	#ifdef LOCAL
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	scanf(I64, &x);
	for (ll i = 2; i * i <= x; i++)
		while (x % i == 0)
		{
			cnt[i]++;
			x /= i;
			if (v.empty() || v.back() != i)
				v.pb(i);
		}
	if (x > 1)
	{
		cnt[x]++;
		if (v.empty() || v.back() != x)
			v.pb(x);
	}
	cur = 1ll;
	for (int x : v)
		cur *= x;
	P = vector <int> (v.size(), 1);
	/*
	printf(I64 "\n", cur);
	for (auto x : cnt)
		printf(I64 "**%d\n", x.F, x.S);
	puts("");
	*/
	if (ok(cur))
	{
		printf(I64, cur);
		return 0;
	}
	N = min(3, int(v.size()));
	rec(0, cur);
	printf(I64, ans);
}
