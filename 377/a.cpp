
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
//#define LOCAL

struct item
{
	bool add;
	int sum;
	item * l,  * r;
	item() : add(0), sum(0), l(0), r(0) {};
};

typedef item * pitem;

void push(pitem v, int tl, int tr)
{
	if (!v || tl == tr || !(v -> add))
		return;
	int tm = (tl + tr) >> 1;
	if (v -> l)
	{
		v -> l -> add = 1;
		v -> l -> sum = tm - tl;
	}
	if (v -> r)
	{
		v -> r -> add = 1;
		v -> r -> sum = tr - tm - 1; 
	}
	v -> add = 0;
}

void upd(pitem &v, int tl, int tr, int l, int r)
{
	if (tr < l || r < tl)
		return;
	//printf("%d %d %d %d\n", tl, tr, l, r);
	push(v, tl, tr);
	if (!v)
		v = new item();
	if (l <= tl && tr <= r)
	{
		v -> add = 1;
		v -> sum = tr - tl;
		//printf("(%d %d) ", tl, tr);
		return;
	}
	int tm = (tl + tr) >> 1;
	upd(v -> l, tl, tm, l, r);
	upd(v -> r, tm + 1, tr, l, r);
	v -> sum = 0;
	if (v -> l)
		v -> sum += v -> l -> sum;
	if (v -> r)
		v -> sum += v -> r -> sum;
}

int get(pitem v, int tl, int tr, int l, int r)
{
	if (!v || tr < l || r < tl)
		return 0;
	push(v, tl, tr);
	if (l <= tl && tr <= r)
		return v -> sum;
	int tm = (tl + tr) >> 1;
	return get(v -> l, tl, tm, l, r)
		+ get(v -> r, tm + 1, tr, l, r);
}

pitem root = new item();
int n, l, r;

int main()
{
	#ifdef LOCAL
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d%d", &l, &r);
		upd(root, -inf, inf, l, r);
		//printf("%d\n", get(root, 1, n, -inf, inf));
	}
	printf("%d\n", get(root, -inf, -inf, -inf, inf));
}
