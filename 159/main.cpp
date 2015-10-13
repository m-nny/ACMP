
#include <iostream>
#include <queue>
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
#define forn(ii, ee) for (int ii = 0; ii < ee; ii++)
#define frn(ii, bb, ee) for (int ii = bb; ii < ee; ii++)
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

const int inf = (int)(1e9+7), maxn = (int)(2e5);
double eps = (1e-7);

int n, a[maxn], x;

int main()
{
	#ifdef TED
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	cin >> n;
	forn(i, n)
		cin >> x, a[x - 1] = i + 1;
	forn(i, n)
		printf("%d ", a[i]);
}