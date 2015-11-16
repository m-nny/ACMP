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

int n, cur;

int cnt[11];

bool F(int x)
{
	memset(cnt, 0, sizeof(cnt));
	while (x > 0)
	{
		if (cnt[x % 10])
			return 0;
		cnt[x % 10]++;
		x /= 10;
	}
	return 1;
}

int main()
{
	#ifdef fn
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		cur++;
		while (!F(cur))
			cur++;
		//printf("%d %d\n", i, cur);
	}
	printf("%d", cur);
}
