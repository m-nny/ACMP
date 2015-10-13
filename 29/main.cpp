
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

const int inf = (int)(1e9+7), maxn = (int)(3e5+7);
double eps = (1e-7);

int n, a[maxn], dp[maxn];

int rec(int uk)
{
	if (dp[uk] != -1)
		return dp[uk];
	if (uk == n-1)
		return 0;
	int c = inf, b = inf;
	if (uk + 1 <= n)
		c = rec(uk+1);
	if (uk + 2 <= n)
		b = rec(uk+2);
//	cerr << uk << " " << c << " " << b << '\n';
	c += abs(a[uk+1] - a[uk]);
	b += 3*abs(a[uk+2] - a[uk]);
	dp[uk] = min(c, b);
//	cerr << " " << c << " " << b << " " << dp[uk] << '\n';
	return dp[uk];
}

int main()
{
	#ifdef TED
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	cin >> n;
	fr(i, maxn)
		dp[i] = -1;
	fr(i, n)
		cin >> a[i];
	cout << rec(0);
}