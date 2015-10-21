
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
#define NO {puts("Incorrect"); exit(0);}

int a[110][110], n, nn;
int us[110];

void check(int I, int J)
{
	memset(us, 0, sizeof(us));
	for (int i = I; i <= I + n - 1; i++)
		for (int j = J; j <= J + n - 1; j++)
			if (1 <= a[i][j] && a[i][j] <= nn)
				us[a[i][j]]++;
	for (int i = 1; i <= nn; i++)
		if (!us[i])
			NO;
}

int main()
{
	#ifdef LOCAL
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	scanf("%d", &n);
	nn = n * n;
	for (int i = 1; i <= nn; i++)
		for (int j = 1; j <= nn; j++)
			scanf("%d", &a[i][j]);
	
	for (int i = 1; i <= nn; i++)
	{
		memset(us, 0, sizeof(us));
		for (int j = 1; j <= nn; j++)
			if (1 <= a[i][j] && a[i][j] <= nn)
				us[a[i][j]]++;
		for (int j = 1; j <= nn; j++)
			if (!us[j])
				NO;
	}
	for (int j = 1; j <= nn; j++)
	{
		memset(us, 0, sizeof(us));
		for (int i = 1; i <= nn; i++)
			if (1 <= a[i][j] && a[i][j] <= nn)
				us[a[i][j]]++;
		for (int i = 1; i <= nn; i++)
			if (!us[i])
				NO;
	}
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			check((i - 1) * n + 1, (j - 1) * n + 1);
	puts("Correct");
}
