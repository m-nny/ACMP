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

string s, ans, cur;

void rec(int pos, int cnt)
{
	//cout << pos << " " << cnt << " c:" << cur << " a:" << ans << '\n';
	if (pos == int(s.length()))
	{
		if (!cnt && (ans == "" || cur.length() > ans.length() || cur > ans))
			ans = cur;
		return;
	}
	if (cnt)
		rec(pos + 1, cnt - 1);
	if (cur != "" || s[pos] != '0')
		cur.pb(s[pos]);
	rec(pos + 1, cnt);
	if (cur != "" || s[pos] != '0')
		cur.pop_back();
}

int main()
{
	#ifdef fn
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	cin >> s;
	rec(0, 2);
	cout << ans;
}
