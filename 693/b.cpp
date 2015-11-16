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
#define all(x) x.begin(), x.end()

string s, t;

int main()
{
	#ifdef fn
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	cin >> s >> t;
	for (int i = 0; i < int(s.size()); i++)
		if ('A' <= s[i] && s[i] <= 'Z')
			s[i] = s[i] - 'A' + 'a';
	sort(all(s));
	for (int i = 0; i < int(t.size()); i++)
		if ('A' <= t[i] && t[i] <= 'Z')
			t[i] = t[i] - 'A' + 'a';
	sort(all(t));
	puts(s == t ? "Yes" : "No");
}
