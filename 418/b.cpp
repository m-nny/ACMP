
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
#define all(x) x.begin(), x.end()
#define next MyLittleNext
//#define end MyLittleEnd
#define LOCAL

int ans;
vector <int> v;
int y;
char c;
string s;

int main()
{
	#ifdef LOCAL
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	v.pb(0);
	auto it = v.begin();
	getline(cin, s);
	int n = int(s.length());
	for (int i = 0; i < n; i++)
	{
		/*
		for (int x : v)
			printf("%d ", x);
		puts("");
		*/
		c = s[i];
		//printf("'%c':", c);
		if (c == '\\')
		{
			it++;
			it = v.insert(it, 0);
			//puts("");
			y++;
			continue;
		}
		if (c == '<')
		{
			if (v[y])
				v[y]--;
			//puts("");
			continue;
		}
		if (c == '^')
		{
			if (y)
				y--, it--;
			//puts("");
			continue;
		}
		if (c == '|')
		{
			if (y + 1 < int(v.size()))
				y++, it++;
			//puts("");
			continue;
		}
		if (32 <= c)
		{
			v[y]++;
			//printf("y:%d v:%d\n\n", y, v[y]);
			ans = max(ans, v[y]);
		}
	}
	printf("%d", ans);
}
