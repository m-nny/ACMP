
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
#define NO {puts("Error!"); exit(0);}

char s[maxn], t[maxn];
int n;

void toC()
{
	int j = 0;
	for (int i = 0; i < n; i++)
	{
		if ('A' <= s[i] && s[i] <= 'Z')
		{
			t[j++] = '_';
			t[j++] = s[i] - 'A' + 'a';
		}
		else
			t[j++] = s[i];
	}
}

void toJava()
{
	int j = 0;
	for (int i = 0; i < n; i++)
	{
		if (s[i] == '_')
		{
			if (i + 1 == n || !i || s[i + 1] == '_')
				NO;
			i++;
			t[j++] = s[i] - 'a' + 'A';
		}
		else
			t[j++] = s[i];
	}
}

int main()
{
	#ifdef LOCAL
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	scanf("%s", s);
	n = strlen(s);
	bool f1 = 0, f2 = 0, f3 = 0;
	for (int i = 0; i < n; i++)
	{
		if (s[i] == '_')
			f1 = 1;
		else
		if ('A' <= s[i] && s[i] <= 'Z' && i)
			f2 = 1;
		else
		if (s[i] < 'a' || 'z' < s[i])
			f3 = 1;
	}
	if ((f1 && f2) || f3)
		NO;
	if (!f1 && !f2)
	{
		puts(s);
		return 0;
	}
	if (f1)
		toJava();
	else
		toC();
	puts(t);
}
