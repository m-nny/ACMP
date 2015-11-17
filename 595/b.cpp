
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

int n;
string s, t;

vector <int> KMP(string s)
{
	int n = int(s.length());
	vector <int> p(n, 0);
	for (int i = 1; i < n; i++)
	{
		int j = p[i - 1];
		while (j > 0 && s[i] != s[j])
			j = p[j - 1];
		if (s[i] == s[j])
			j++;
		p[i] = j;
	}
	return p;
}

int main()
{
	#ifdef LOCAL
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	cin >> s >> t;
	n = int(s.length());
	if (int(t.length()) != n)
	{
		puts("No");
		return 0;
	}
	string B = t + "#" + s;
	reverse(all(t));
	string R = t + "#" + s;
	vector <int> v = KMP(B);
	vector <int> u = KMP(R);
	/*
	for (char x : B)
		printf("%c ", x);
	puts("");
	for (int x : v)
		printf("%d ", x);
	puts("\n");
	for (char x : R)
		printf("%c ", x);
	puts("");
	for (int x : u)
		printf("%d ", x);
	puts("");
	*/
	for (int x = v[n + n]; x >= 0; x--)
	{
		int y = n - x;
		//printf("%d %d %c\n", x, y + n, R[y + n]);
		if (x + u[y + n] == n)
		{
			printf("Yes\n%d", y);
			return 0;
		}
	}
	puts("No");
}
