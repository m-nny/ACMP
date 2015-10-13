
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <set>
#include <ctime>
#include <cmath>

using namespace std;

#define pb push_back
#define mp make_pair
#define F first
#define S second
#define fr(ii, ee) for (int ii = 0; ii < ee; ii++)
#define fbr(ii, bb, ee) for (int ii = bb; ii < ee; ii++)
#define fn ""
#define TED

typedef long long ll;
typedef unsigned long long ull;
typedef string str;
typedef pair <int, int> pii;
typedef vector <int> vi;
typedef set <int> si;
typedef map <int, int> mii;
typedef map <str, int> msi;

const int inf = (int)(1e9+7), maxn = (int)(2e3);
double eps = (1e-7);

int n, a[maxn], dp[maxn], pr[maxn];

int rec(int uk)
{
	if (uk == n)
		return a[uk];
	if (dp[uk] != -inf)
		return dp[uk];
	int c = -inf, b = -inf;
	if (uk + 1 <= n)
		c = rec(uk + 1);
	if (uk + 2 <= n)
		b = rec(uk + 2);
	if (b > c)
		pr[uk] = uk + 2;
	else
		pr[uk] = uk + 1;
	dp[uk] = max(b, c) + a[uk];
	return dp[uk];
}

void ct(int x)
{
	if(x!=0)
		cout << x << " ";
	if (x == n)
		return;
	int a = pr[x];
	ct(pr[x]);
}

int main()
{
	#ifdef TED
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	cin >> n;
	for(int i = 1; i <= n; i++)
		cin >> a[i];
	fr(i, maxn)
		dp[i] = -inf, pr[i] = -inf;
	pr[0] = 0;
	cout << rec(0) << '\n';
	ct(0);
}