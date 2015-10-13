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

int n;
int a[maxn];

int main()
{
	#ifdef fn
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", a + i);
	n--;
	for (int i = 1; i <= n; i++)
	{
		if (n % i)
			continue;
		bool ok = true;
		for (int j = 0; j < n - i; j++)
			if (a[j] != a[j + i])
			{
				ok = false;
				break;
			}
		if (ok)
		{
			printf("%d", i);
			return 0;
		}
	}
	printf("%d", n);
}
