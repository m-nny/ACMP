
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

int n, P;
string ans;
ll a, cur;

void F(int pos)
{
	set <char> S;
	string s = "";
	ll x = a;
	while (x)
	{
		s += x % pos + ((x % pos) < 10 ? '0' : ('A' - 10));
		S.insert(s.back());
		x /= pos;
	}
	while (s.size() > 1 && s.back() == '0')
		s.pop_back();
	if (s.length() + S.size() < cur)
	{
		P = pos;
		cur = s.length() + S.size();
		ans = s;
	}
}

int main()
{
	#ifdef LOCAL
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		scanf(I64, &a);
		cur = linf;
		for (int pos = 2; pos <= 36; pos++)
			F(pos);
		reverse(all(ans));
		printf("%d %s\n", P, ans.c_str());
	}
}
