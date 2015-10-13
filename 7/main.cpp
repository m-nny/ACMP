
#include <bits/stdc++.h>

using namespace std;

typedef long long  ll;
typedef unsigned long long ull;
typedef map <int, int> mii;
typedef pair <int, int> pii;
typedef pair <ll, ll> pll;

#define maxn int(1e5 + 12)
#define maxb int(1e3 + 12)
#define inf int(1e9 + 7)
#define linf ll(1e18 + 12)
#define eps 1e-7
#define mp make_pair
#define pb push_back
#define F first
#define S second
#define LOCAL

const int base = 1000 * 1000 * 1000;

typedef vector <int> Int;

void write(Int a)
{
	printf("%d", a.empty() ? 0 : a.back());
	for (int i = int(a.size()) - 2; i >= 0; i--)
		printf("%09d", a[i]);
}

void read(Int &a)
{
	char s[maxb];
	scanf("\n%s", s);
	int sz = (int)strlen(s);
	a.clear();
	for (int i = sz; i > 0; i -= 9)
	{
		s[i] = 0;
		a.pb(atoi(i > 8 ? s + i - 9 : s));
	}
}

void read(Int &a, const char T[])
{
	char s[maxn];
	int sz = (int)strlen(T);
	for (int i = 0; i < sz; i++)
		s[i] = T[i];
	s[sz] = 0;
	a.clear();
	for (int i = sz; i > 0; i -= 9)
	{
		s[i] = 0;
		a.pb(atoi(i > 8 ? s + i - 9 : s));
	}
}

Int operator + (Int a, Int b)
{
	int carry = 0;
	for (int i = 0; i < (int)max(a.size(), b.size()) || carry; i++)
	{
		if (i >= (int)a.size())
			a.pb(0);
		a[i] += carry + (i < (int)b.size() ? b[i] : 0);
		carry = a[i] >= base;
		if (carry)
			a[i] -= base;
	}
	while (a.size() > 1 && a.back() == 0)
	a.pop_back();
	return a;
}

Int operator * (Int a, int b)
{
	int carry = 0;
	for (int i = 0; i < int(a.size()) || carry; i++)
	{
		if (i >= (int)a.size())
			a.pb(0);
		ll buf = carry + b * 1ll * a[i];
		a[i] = int(buf % base);
		carry = int(buf / base);
	}
	while (a.size() > 1 && a.back() == 0)
		a.pop_back();
	return a;
}

Int operator * (Int a, Int b)
{
	Int c(a.size() + b.size());
	for (int i = 0; i < int(a.size()); i++)
	for (int j = 0, carry = 0; j < int(b.size()) || carry; j++)
	{
		ll cur = c[i + j] +  a[i] * 1ll * (j < int(b.size()) ? b[j] : 0) + carry;
		c[i + j] = int(cur % base);
		carry = int(cur / base);
	}
	while (c.size() > 1 && c.back() == 0)
		c.pop_back();
	return c;
}

Int operator - (Int a, Int b)
{
	int carry = 0;
	for (int i = 0; i < int(a.size()); i++)
	{
		a[i] -= carry + (i < (int)b.size() ? b[i] : 0);
		carry = a[i] < 0;
		if (carry)
			a[i] += base;
	}
	while (a.size() > 1 && a.back() == 0)
		a.pop_back();
	return a;
}

Int operator / (Int a, int b)
{
	int carry = 0;
	for (int i = int(a.size()) - 1; i >= 0; i--)
	{
		ll buf = a[i] + carry * 1ll * base;
		a[i] = int(buf / b);
		carry = int(buf % b);
	}
	while (a.size() > 1 && a.back() == 0)
		a.pop_back();
	return a;
}

int operator % (Int a, int b)
{
	int carry = 0;
	for (int i = int(a.size()) - 1; i >= 0; i--)
	{
		ll buf = a[i] + carry * 1ll * base;
		a[i] = int(buf / b);
		carry = int(buf % b);
	}
	while (a.size() > 1 && a.back() == 0)
		a.pop_back();
	return carry;
}

Int operator ++(Int a)
{
	Int b = {1};
	return a + b;
}

Int operator ++(Int & a, int)
{
	Int b = {1};
	a = a + b;
	return a;
}

Int operator *= (Int & a, Int b)
{
	a = a * b;
	return a;
}

bool operator < (string a, string b)
{
	if (a.size() != b.size())
		return a.size() < b.size();
	for (int i = 0; i < int(a.size()); i++)
		if (a[i] != b[i])
			return a[i] < b[i];
	return 0;
}

Int min(Int a, Int b)
{
	if (a < b)
		return a;
	else
		return b;
}

int main()
{
	#ifdef LOCAL
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	Int a, b, c;
	read(a);
	read(b);
	read(c);
}