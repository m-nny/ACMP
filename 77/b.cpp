
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

int n, k;
int a[35], sz;
ll C[35][35];

ll rec(int pos, int same, int cnt)
{
	if (cnt > k)
	{
		return 0ll;
	}
	if (!same)
	{
		//printf("p:%d s:%d c:%d a:" I64 "\n", pos, same, cnt, C[sz - pos][k - cnt]);
		return C[sz - pos][k - cnt];
	}
	if (pos == sz - 1)
	{
		return (cnt == k) || (cnt + 1 == k);
	}
	ll ans = rec(pos + 1, !a[pos], cnt + 1);
	if (a[pos])
		ans += rec(pos + 1, 1, cnt);
	//printf("p:%d s:%d c:%d a:" I64 "\n", pos, same, cnt, ans);
	return ans;
}

int main()
{
	#ifdef LOCAL
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	scanf("%d%d", &n, &k);
	int N = n;
	while (N)
		a[sz++] = N & 1, N /= 2;
	reverse(a, a + sz);
	/*
	printf("%d\n", sz);
	for (int i = 0; i < sz; i++)
		printf("%d", a[i]);
	puts("");
	*/
	if ((1ll << (sz + 1)) < k)
	{
		puts("0");
		return 0;
	}
	for (int n = 0; n < 35; n++)
	{
		C[n][0] = C[n][n] = 1;
		for (int k = 1; k < 35; k++)
			C[n][k] = C[n - 1][k] + C[n - 1][k - 1];
	}
	ll ans = 0;
	for (int i = k + 1; i < sz; i++)
	{
		ans += C[i - 1][k];
		//printf("%d " I64 "\n", i, C[i - 1][k]);
	}
	ll cur = rec(1, 1, 0);
	//printf(I64 " ", cur);
	ans += cur;
	printf(I64, ans);
}
