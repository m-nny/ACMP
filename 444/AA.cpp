
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <map>
#include <set>
#include <vector>
#include <queue>
#include <cmath>
#include <cstring>

using namespace std;

typedef long long  ll;
typedef unsigned long long ull;
typedef map <int, int> mii;
typedef pair <int, int> pii;
typedef pair <ll, ll> pll;

#define maxn int(2e6 + 12)
#define maxb int(2e6 + 12)
#define inf int(1e9 + 7)
#define linf ll(1e18 + 12)
#define eps 1e-7
#define mp make_pair
#define pb push_back
#define F first
#define S second
#define LOCAL

int n;
int a[1010];
string s;

string itoa(int x)
{
	string ans = "";
	int fl = 0;
	if (x < 0)
		fl = 1, x *= -1;
	while (x > 0)
	{
		char _char = char(x % 10 + '0');
		string _ans = "";
		_ans += _char;
		_ans += ans;
		ans = _ans;
		x /= 10;
	}
	if (fl)
	{
		char _char = '-';
		string _ans = "";
		_ans += _char;
		_ans += ans;
		ans = _ans;
	}
	return ans;
}

int f(int l)
{
	int r = l + 1;
	while (r < n && (a[r] == a[r - 1] || a[r] - a[r - 1] == 1))
		r++;
	r--;
	string s1 = "", s2 = "";
	for (int i = l; i <= r; i++)
	{
		s1 += itoa(a[i]);
		if (i != n - 1)
			s1 += ", ";
	}
	s2 = itoa(a[l]);
	s2 += ", ..., ";
	s2 += itoa(a[r]);
	if (r != n - 1)
		s2 += ", ";
	if (int(s1.size()) < int(s2.size()))
		s += s1;
	else
		s += s2;
	//cout << "!"<< s1 << "! vs !" << s2 << "!\n";
	return r;
}

int main()
{
	#ifdef LOCAL
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	sort(a, a + n);
	/*
	for (int i = 0; i < n; i++)
	{
		string S = itoa(a[i]);
		for (int j = 0; j < int(S.size()); j++)
			cout << S[j];
		cout << '\n';
	}
	puts("");
	*/
	int i = 1;
	i = f(0) + 1;
	//cout << s << '\n';
	int l = -1;
	for (; i < n; i++)
	{
		if (a[i] == a[i - 1] || a[i] - a[i - 1] == 1)
		{
			if (l == -1)
			{
				i = f(i - 1) + 1;
			}
		}
		else
		{
			if (a[i] != a[i + 1] && a[i] - a[i + 1] != 1)
			{
				s += itoa(a[i]);
				if (i != n - 1)
					s += ", ";
			}
		}
	}
	//puts("\n\n");
	for (int i = 0; i < int(s.size()); i++)
		printf("%c", s[i]);
}