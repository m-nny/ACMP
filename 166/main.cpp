
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

#define ll long long
#define str string
#define INF (int)(1e9+7)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define fr(ii, ee) for (int ii = 0; ii < ee; ii++)
#define frv(ii, ite, vv) for(vector<ite>::iterator ii = vv.begin(); ii != vv.end(); ii++)
#define frs(ii, ite, vv) for(set<ite>::iterator ii = vv.begin(); ii != vv.end(); ii++)
#define frq(ii, ite, vv) for(queue<ite>::iterator ii = vv.begin(); ii != vv.end(); ii++)

ll g3, g5;

void fn(ll nn)
{
	ll n = nn, x, y;
	x = n/5;
	n -= x*5;
	while (n%3!=0 && x > 0)
	{
		n+=5;
		x--;
	}
	y = n/3;
	g5 = x, g3 = y;
}

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	ll k, n;
	cin >> k >> n;
	ll r0 = k, r1 = 0l, r2 = 0l, r = r0 + r1 + r2;
	fr(i, n-1)
	{
		int b0, b1, b2;
		r = r1 + r2 + r0;
		fn(r);
		b0 = g3 * 5l + g5 * 9l;
		b1 = r0;
		b2 = r1;
		r0 = b0;
		r1 = b1;
		r2 = b2;
//		printf("5 = %i, 3 = %i, %i, %i, %i, r = %i\n", g5, g3, b0, b1, b2, r1+r2+r0);
		r = r1 + r2 + r0;
	}
	cout << r;
}