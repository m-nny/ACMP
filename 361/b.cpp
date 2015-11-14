
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

unordered_map <string, int> dic;

string s;
int n, ans;

string srt(int l, int r)
{
	string t;
	while (l <= r)
	{
		t += s[l];
		l++;
	}
	sort(all(t));
	return t;
}

int main()
{
	#ifdef LOCAL
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	cin >> s;
	n = int(s.length());
	for (int i = 0; i < n; i++)
		for (int j = i; j < n; j++)
		{
			int & x = dic[srt(i, j)];
			if (x)
				ans = max(ans, j - i + 1);
			x++;
		}
	printf("%d", ans);
}
