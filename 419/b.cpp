
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

int const p = 31, mod = inf;
ll const mod2 = mod * 1ll * mod;

char s[maxn];
int n, a[maxn], b[maxn], p_pow[maxn];

int hash1(int l, int r)
{
	return (a[r] - a[l - 1] * p_pow[r - l] + mod2) % mod;
}

int hash2(int l, int r)
{
	return (b[l] - b[r + 1] * p_pow[r - l] + mod2) % mod;
}

int hash1(int pos)
{
	return hash1(1, pos - 1) * p_pow[n - pos] + hash1(pos + 1, n);
}

int hash2(int pos)
{
	return hash2(1, pos - 1) + hash2(pos + 1, n) * p_pow[n - pos];
}

int main()
{
	#ifdef LOCAL
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	string S;
	getline(cin, S);
	for (int i = 0; i < int(S.length()); i++)
	{
		if (S[i] == ' ')
			continue;
		if ('A' <= S[i] && S[i] <= 'Z')
			s[++n] = S[i] - 'A' + 'a';
		else
			s[++n] = S[i];
	}
	puts(s + 1);
	
	p_pow[0] = 1;
	for (int i = 1; i <= n; i++)
	{
		p_pow[i] = (p_pow[i - 1] * p + mod2) % mod;
		a[i] = (a[i - 1] * p + s[i] - 'a' + 1 + mod2) % mod;
	}
	for (int i = n; i > 0; i--)
		b[i] = (b[i + 1] * p + s[i] - 'a' + 1 + mod2) % mod;
	printf("%d %d\n", a[n], b[1]);
	printf("%d %d\n", hash1(1, n), hash2(1, n));
	if (hash1(1, n) == hash2(1, n))
	{
		puts("YES");
		puts(s + 1);
		return 0;
	}
	for (int i = 1; i <= n; i++)
	
}
