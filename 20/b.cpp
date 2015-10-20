
#include <bits/stdc++.h>

using namespace std;

typedef long long  ll;
typedef unsigned long long ull;
typedef map <int, int> mii;
typedef pair <int, int> pii;
typedef pair <ll, ll> pll;

int const maxn = int(1e6 + 12);
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

int n, a[maxn];
int last, cur, ans;

int f(int i)
{
	if (a[i - 2] < a[i - 1] && a[i - 1] > a[i])
		return 1;
	if (a[i - 2] > a[i - 1] && a[i - 1] < a[i])
		return -1;
	return 0;
}

int main()
{
	#ifdef LOCAL
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
		scanf("%d", a + i);
	if (n < 3)
	{
		if (n == 1 || (a[2] != a[1]))
			printf("%d", n);
		else
			puts("1");
		return 0;
	}
	last = f(3);
	cur = abs(last) * 3;
	if (!last)
		cur = (a[2] != a[3]) + 1;
	for (int i = 4; i <= n; i++)
	{
		int now = f(i);
		if (now == 0)
		{
			cur = (a[i] != a[i - 1]) + 1;
		}
		if (last == 0)
			cur = abs(now) * 3;
		else
		{
			if (last == -1 && now == 1)
				cur++;
			if (last == 1 && now == -1)
				cur++;
		}
		last = now;
		ans = max(cur, ans);
	}
	ans = max(cur, ans);
	printf("%d", ans);
}
