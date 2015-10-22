
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
#define rank MyLittleRank
//#define end MyLittleEnd
#define all(x) x.begin(), x.end()
#define LOCAL

struct rec
{
	int x1, x2, y1, y2;
	rec()
	{
		x1 = x2 = y1 = y2 = 0;
	}
	rec(int)
	{
		int r;
		scanf("%d%d%d%d%d", &x1, &y1, &x2, &y2, &r);
		if (x1 > x2)
			swap(x1, x2);
		if (y1 > y2)
			swap(y1, y2);
		x1 -= r;
		y1 -= r;
		x2 += r;
		y2 += r;
	}
	bool inter(rec x)
	{
		int a = max(x.x1, x1),
			b = max(x.y1, y1),
			c = min(x.x2, x2),
			d = min(x.y2, y2);
		return a <= c && b <= d;
	}
};

int boss[110], rank[110], SZ;

int who(int x)
{
	return boss[x] = ((x == boss[x]) ? x : who(boss[x]));
}

void merge(int a, int b)
{
	a = who(a);
	b = who(b);
	if (a == b)
		return;
	if (rank[a] > rank[b])
		swap(a, b);
	boss[a] = b;
	if (rank[a] == rank[b])
		rank[b]++;
	SZ--;
}

int n;
rec a[110];

int main()	
{
	#ifdef LOCAL
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		a[i] = rec(i);
		boss[i] = i;
		SZ++;
	}
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
		{
			//cerr << i << " " << j << '\n';
			if (i != j && a[i].inter(a[j]))
			{
				//printf("%d+%d ", i, j);
				merge(i, j);
			}
		}
	printf("%d", SZ);
}
