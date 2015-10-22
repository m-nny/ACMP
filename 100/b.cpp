
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

typedef vector <int> vi;
int const base = int(1e9);

vi operator += (vi & a, vi b)
{
	int carry = 0;
	for (int i = 0; i < int(min(a.size(), b.size())) || carry; i++)
	{
		if (i == int(a.size()))
			a.pb(0);
		a[i] += carry + (i < int(b.size()) ? b[i] : 0);
		carry = a[i] >= base;
		if (carry)
			a[i] -= base;
	}
	return a;
}

vi operator * (vi & a, vi & b)
{
	vi c(a.size() + b.size());
	for (int i = 0; i < int(a.size()); i++)
		for (int j = 0, carry = 0; j < int(b.size()) || carry; j++)
		{
			ll cur = c[i + j] + a[i] * 1ll * (j < int(b.size()) ? b[j] : 0) + carry;
			c[i + j] = int(cur % base);
			carry = int(cur / base);
		}
	while (c.size() > 1 && c.back() == 0)
		c.pop_back();
	return c;
}

vi operator *= (vi & a, vi & b)
{
	a = a * b;
	return a;
}

void out(vi & a)
{
	printf("%d", a.empty() ? 0 : a.back());
	for (int i = int(a.size()) - 2; i >= 0; i--)
		printf("%09d", a[i]);
}

vi operator * (vi & a, ll b)
{
	vi c(1, b);
	return a * b;
}

int n;
vi dp[110][1010];

vi rec(int pos, int sum)
{
	if (!dp[pos][sum].empty())
		return dp[pos][sum];
	if (pos == n / 2)
		return {int(sum == 0)};
	vi & ans = dp[pos][sum];
	ans = vi(1, 0);
	for (int i = 0; i <= min(9, sum); i++)
		ans += rec(pos + 1, sum - i);
	return ans;
}

int main()
{
	#ifdef LOCAL
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	scanf("%d", &n);
	vi F = {0};
	//vi C = vi(1, ((n & 1) * 9 + 1));
	for (int sum = (n / 2) * 9; sum >= 0; sum--)
	{
		vi f = rec(0, sum);
		f *= f;
		F += f/* * C*/;
	}
	out(F);
}
