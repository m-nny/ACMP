
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

int n, k, a[10];
int us[maxn];

int rec(int cnt)
{
	if (cnt == n + 1)
	{
		/*
		for (int i = 1; i <= n; i++)
			printf("%d ", a[i]);
		puts("");
		*/
		return 1;
	}
	int ans = 0;
	for (int i = max(1, a[cnt - 1] - k); i <= min(n, a[cnt - 1] + k); i++)
	{
		if (us[i])
			continue;
		a[cnt] = i;
		us[i] = 1;
		ans += rec(cnt + 1);
		us[i] = 0;
	}
	return ans;
}

int main()
{
	#ifdef LOCAL
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	scanf("%d%d", &n, &k);
	int ans = 0;
	for (int i = 1; i <= n; i++)
	{
		a[1] = i;
		us[i] = 1;
		ans += rec(2);
		us[i] = 0;
	}
	printf("%d", ans);
}
