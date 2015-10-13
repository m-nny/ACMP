
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

int n, m, l;

typedef vector <int> vi;
/*
struct CMP
{
	bool operator()(const vi & a, const vi & b) const
	{
		if (a.size() != b.size())
			return true;
		for (int i = 0; i < int(a.size()); i++)
			if (a[i] != b[i])
				return false;
		return true;
	}
};
*/

map <vi, int> v;

int main()
{
	#ifdef LOCAL
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	scanf("%d%d%d", &l, &m, &n);
	vector <int> cur(l, 0);
	for (int i = 0; i < m; i++)
	{
		int id;
		scanf("%d", &id);
		for (int j = 0; j < l; j++)
			scanf("%d", &cur[j]);
		v[cur] = id;
	}
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < l; j++)
			scanf("%d", &cur[j]);
		auto it = v.find(cur);
		if (it != v.end())
			printf("%d\n", it -> S), ans++;
		else
			puts("-");
	}
	printf("OK=%d BAD=%d", ans, n - ans);
}
