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
 
vector <ll> parse()
{
	vector <ll> v;
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
 
ll norm(vector <ll> & v)
{
	while (v.size() < 3)
		v.pb(0);
	ll carry = 0, i = 0;
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
 
void sum(vector <ll> & l, vector <ll> & r)
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
	vector <ll> a, b;
	a = parse();
	b = parse();
	norm(a);
	ll carry = norm(b);
	sum(a, b);
	carry += norm(a);
	printf("%02I64d:", a[2]);
	printf("%02I64d:", a[1]);
	printf("%02I64d", a[0]);
	if (carry)
		printf("+%64d days", carry);
}