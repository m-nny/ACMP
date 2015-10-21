
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
#define NO {puts("ERROR"); exit(0);}

string s, cur;

int main()
{
	#ifdef LOCAL
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	getline(cin, s);
	int i = 0;
	if (s[i] == '-')
		i++, cur = "-";
	while (i < int(s.length()) && '0' <= s[i] && s[i] <= '9')
		cur += s[i++];
	if (i == int(s.length()) || !i || cur == "-" || cur == "")
		NO;
	ll a = atoi(cur.c_str());
	char op = s[i++];
	if ((op != '+' && op != '-' && op != '*' && op != '/') || i == int(s.length()))
		NO;
	cur = "";
	if (s[i] == '-')
		i++, cur = "-";
	while (i < int(s.length()) && '0' <= s[i] && s[i] <= '9')
		cur += s[i++];
	if (i == int(s.length()) || cur == "" || cur == "-")
		NO;
	char eq = s[i++];
	if (eq != '=' || i == int(s.length()))
		NO;
	ll b = atoi(cur.c_str());
	cur = "";
	if (s[i] == '-')
		i++, cur = "-";
	while (i < int(s.length()) && '0' <= s[i] && s[i] <= '9')
		cur += s[i++];
	if (i != int(s.length()) || cur == "" || cur == "-")
		NO;
	ll c = atoi(cur.c_str());
	//printf(I64 "%c" I64 "=" I64 "\n", a, op, b, c);
	ll d = 0ll;
	if (op == '+')
		d = a + b;
	if (op == '-')
		d = a - b;
	if (op == '*')
		d = a * b;
	if (op == '/')
	{
		if (b == 0 || a % b != 0)
			d = linf;
		else
			d = a / b;
	}
	puts(d == c ? "YES" : "NO");
}
