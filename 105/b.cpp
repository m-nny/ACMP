
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

ll ans, v[12];
int n;
char s[12];

bool rec(int pos, ll cur)
{
	if (pos == n - 1)
		return cur == ans;
	s[pos] = '+';
	if (rec(pos + 1, cur + v[pos]))
		return 1;
	s[pos] = '-';
	if (rec(pos + 1, cur - v[pos]))
		return 1;
	s[pos] = '*';
	if (rec(pos + 1, cur * v[pos]))
		return 1;
	return 0;
}

int main()
{
	#ifdef LOCAL
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	scanf(I64 " = ", &ans);
	string T;
	getline(cin, T);
	string cur = "";
	vector <int> what;
	for (int i = 0; i <= int(T.length()); i++)
	{
		if (T[i] < '0' || '9' < T[i])
		{
			if (cur != "")
			{
				v[n++] = atoi(cur.c_str());
				cur = "";
				what.pb(0);
				what.pb(1);
			}
			if (T[i] == '(')
				what.pb(2);
			if (T[i] == ')')
			{
				what.pop_back();
				what.pb(3);
				what.pb(1);
			}
		}
		else
			cur += T[i];
	}
	
	for (int x : what)
	{
		if (x == 0)
			putchar('N');
		if (x == 1)
			putchar('O');
		if (x == 2)
			putchar('(');
		if (x == 3)
			putchar(')');
	}
	puts("");
	ll base = v[0];
	for (int i = 0; i < n; i++)
		v[i] = v[i + 1];
	for (int i = 0; i < n; i++)
		printf(I64 " ", v[i]);
	puts("");
	if (rec(0, base))
	{
		printf(I64 "=" I64, ans, base);
		for (int i = 0, j = 1, k = 0; j < int(what.size()); j++)
		{
			if (what[j] == 0)
				printf(I64, v[k++]);
			if (what[j] == 1)
				printf("%c", s[i++]);
			if (what[j] == 2)
				printf("(");
			if (what[j] == 3)
				printf(")");
		}
		return 0;
	}
	puts("-1");
}
