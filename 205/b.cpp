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
#define fn
 
vector <int> parse()
{
	vector <int> v;
	string s;
	cin >> s;
	ll cur = 0, p = 1;
	for (auto it = s.rbegin(); it != s.rend(); it++)
	{
		if (*it == ':')
		{
			v.pb(cur);
			cur = 0;
			p = 1;
		}
		else
		{
			cur += p * (*it - '0');
			p *= 10;
		}
	}
	v.pb(cur);
	return v;
}
 
int norm(vector <int> & v)
{
	while (v.size() < 3)
		v.pb(0);
	int carry = 0, i = 0;
	for (i = 0; i < int(v.size()) - 1; i++)
	{
		v[i] = (v[i] + carry);
		carry = v[i] / 60;
		v[i] %= 60;
	}
	v[i] = (v[i] + carry);
	carry = v[i] / 24;
	v[i] %= 24;
	return carry;
}
 
void sum(vector <int> & l, vector <int> & r)
{
	for (int i = 0; i < int(l.size()); i++)
		l[i] += r[i];
}
 
int main()
{
	#ifdef fn
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	vector <int> a, b;
	a = parse();
	b = parse();
	norm(a);
	int carry = norm(b);
	sum(a, b);
	carry += norm(a);
	for (int i = 2; i >= 0; i--)
	{
		if (a[i] < 10)
			printf("0");
		printf("%d", a[i]);
		if (i)
			printf(":");
	}
		if (carry)
		printf("+%d days\n", carry);
}