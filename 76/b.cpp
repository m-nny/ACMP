
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

int n, cur, ans;
multiset <pair <int, bool >> s;

int main()
{
	#ifdef LOCAL
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		int a, b;
		scanf("%d:%d", &a, &b);
		s.insert(mp(a * 60 + b, 0));
		scanf("%d:%d", &a, &b);
		s.insert(mp(a * 60 + b, 1));
	}
	while (!s.empty())
	{
		if (s.begin() -> S)
			cur--;
		else
			cur++;
		s.erase(s.begin());
		ans = max(ans, cur);
	}
	printf("%d", ans);
}
