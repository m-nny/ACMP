
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

string t;

string f(int x)
{
	string t = "";
	while (x)
		t += x % 10 + '0', x /= 10;
	reverse(all(t));
	return t;
}

bool equal(string s, string t)
{
	for (int i = 0; i < int(s.size()); i++)
		if (s[i] != t[i])
			return false;
	return true;
}

void check(int len)
{
	int x = 0, X = 0;
	for (int i = 0; i < len; i++)
		x = x * 10 + t[i] - '0';
	printf("%d:\n", x);
	X = x;
	for (int i = len; i < int(t.size()); i += len)
		if (!equal(t.substr(i, len), f(++x)))
			return;
	int pos = 1;
	for (int i = 1; i < X; i++)
	{
		int y = i, cur = 0;
		while (y)
			cur++, y /= 10;
		pos += cur;
		printf("%d %d\n", i, cur);
	}
	printf("%s\n", t.substr(0, len).c_str());
	printf("%d", pos);
	exit(0);
}

int main()
{
	#ifdef LOCAL
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	cin >> t;
	for (int len = 1; len <= int(t.size()); len++)
		check(len);
}
