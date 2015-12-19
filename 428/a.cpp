
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
//#define fn ""

typedef vector <int> vi;

int const base = int(1e9);

vi operator + (vi a, vi b)
{
	int carry = 0;
	for (int i = 0; i < (int)max(a.size(), b.size()) || carry; i++)
	{
		if (i == int(a.size()))
			a.pb(0);
		a[i] += carry + (i < (int)b.size() ? b[i] : 0);
		carry = a[i] >= base;
		if (carry)
			a[i] -= base;
	}
	return a;
}

map <char, int> gr, pos;
int sz[] = {0, 0, 3, 3, 3, 3, 3, 4, 3, 4}, n;
char s[100];
vector <int> v, k;
vi dp[500][500], C[5][500][500];

vi cnt(int all, int need, int k)
{
	//printf("cnt:%d %d %d\n", all, need, k);
	if (need < (all + k - 1) / k || need > all)
		return {0};
	if (need == 1)
		return {1};
	vi & ans = C[k][all][need];
	if (!ans.empty())
		return ans;
	ans.pb(0);
	for (int x = 1; x <= k && x <= all; x++)
		ans = ans + cnt(all - x, need - 1, k);
	return ans;
}

vi rec(int pos, int sum)
{
	//printf("->>%d %d %d %d\n", pos, sum, sz[k[pos]], k[pos]);
	if (pos == int(v.size() - 1))
		return cnt(v[pos], sum, k[pos]);
	vi & ans = dp[pos][sum];
	if (!ans.empty())
		return ans;
	ans.pb(0);
	for (int i = (v[pos] + k[pos] - 1) / k[pos]; i <= v[pos] && i <= sum; i++)
	{
		vi now = cnt(v[pos], i, k[pos])
		if (now.size() == 1 && )
			continue;
		ans = ans + cnt(v[pos], i, k[pos]) * rec(pos + 1, sum - i);
	}
	return ans;
}

int main()
{
	#ifdef fn
		freopen(fn ".in", "r", stdin);
		freopen(fn ".out", "w", stdout);
	#endif
	char cur = 'A';
	for (int i = 2; i < 10; i++)
		for (int j = 0; j < sz[i]; j++)
		{
			pos[cur] = j + 1;
			gr[cur++] = i;
		}
	/*
	for (auto x : gr)
		printf("%c %d %d\n", x.F, x.S, pos[x.F]);
	*/
	scanf("%d\n%s", &n, s + 1);
	int m = strlen(s + 1);
	int buf = pos[s[1]];
	for (int i = 2; i <= m; i++)
	{
		//printf("%c %d %d\n", s[i], gr[s[i]], pos[s[i]]);
		if (gr[s[i]] == gr[s[i - 1]])
			buf += pos[s[i]];
		else
			v.pb(buf), buf = pos[s[i]], k.pb(sz[gr[s[i - 1]]]);
	}
	v.pb(buf);
	k.pb(sz[gr[s[m]]]);
	/*
	for (int x : v)
		printf("%d ", x);
	puts("");
	for (int x : k)
		printf("%d ", x);
	puts("");
	*/
	printf(I64 "\n", rec(0, n));
}
