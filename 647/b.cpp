
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

struct item
{
	int prior, x, sz;
	item * l, * r, * pr;
	item()
	{
		x = prior = sz = 0;
		l = r = pr = NULL;
	}
	item(int data)
	{
		sz = 1;
		x = data;
		prior = (rand() << 16) + rand();
		l = r = pr = NULL;
	}
};

typedef item * pitem;

int sz(pitem t)
{
	return t ? t -> sz : 0;
}

void upd(pitem t)
{
	if (!t)
		return;
	t -> sz = 1 + sz(t -> l) + sz(t -> r);
	if (t -> l)
		t -> l -> pr = t;
	if (t -> r)
		t -> r -> pr = t;
}

void split(pitem t, pitem & l, pitem & r, int key, int add = 0)
{
	if (!t)
	{
		l = r = NULL;
		return;
	}
	int cur_key = add + sz(t -> l);
	if (key <= cur_key)
		split(t -> l, l, t -> l, key, add), r = t;
	else
		split(t -> r, t -> r, r, key, add + 1 + sz(t -> l)), l = t;
	upd(t);
}

void merge(pitem & t, pitem l, pitem r)
{
	if (!l || !r)
	{
		t = l ? l : r;
		return;
	}
	if (l -> prior > r -> prior)
		merge(l -> r, l -> r, r), t = l;
	else
		merge(r -> l, l, r -> l), t = r;
	upd(t);
}

int pos(pitem t, pitem last = NULL)
{
	if (!t)
		return 0;
	int ans = 0;
	if (!last || last == t -> r)
		ans += sz(t -> l) + 1;
	ans += pos(t -> pr, t);
	return ans;
}

pitem a[maxn];

void walk(pitem t)
{
	if (!t)
		return;
	walk(t -> l);
	printf("%d ", t -> x);
	walk(t -> r);
}

void out(pitem t, int lvl = 0, int add = 0)
{
	if (!t)
		return;
	for (int i = 0; i < lvl; i++)
		printf(" ");
	printf("p:%d x:%d y:%d sz:%d pr:%d\n", sz(t -> l) + add, t -> x, t -> prior, t -> sz, t -> pr ? t -> pr -> x : -1);
	out(t -> l, lvl + 1, add);
	out(t -> r, lvl + 1, add + 1 + sz(t -> l));
}

pitem root;
int n;

int main()
{
	#ifdef LOCAL
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		a[i] = new item(i);
		merge(root, root, a[i]);
	}
	/*
	walk(root);
	puts("");
	out(root);
	puts("");
	for (int i = 1; i <= n; i++)
		printf("%d ", pos(a[i]));
	puts("");
	*/
	int m, x;
	scanf("%d", &m);
	for (int i = 1; i <= m; i++)
	{
		scanf("%d", &x);
		int p = pos(a[x]);
		pitem t1, t2, t3;
		split(root, t1, t2, p - 1);
		split(t2, t2, t3, 1);
		merge(root, t2, t1);
		merge(root, root, t3);
		printf("%d ", p);
	}
}
