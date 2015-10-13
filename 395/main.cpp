
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

const int inf = (int)(1e9+7), maxn = (int)(2e5);
double eps = (1e-7);

bool ch(int x)
{
	int r = 1, xx = x;
	while (xx)
		r *= xx%10, xx/=10;
//	cerr << r << " " << x << '\n';
	if (r != 0)
		return (x % r == 0);
	else
		return 0;
}

int main()
{
	#ifdef TED
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	int l, r, cnt = 0;
	cin >> l >> r;
	fbr(i, l, r+1)
	{
		if (ch(i))
			cnt++;
	}
	cout << cnt;
}