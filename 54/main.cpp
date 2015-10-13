
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
#define INF (int)(1e4+7)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define fr(ii, ee) for (int ii = 0; ii < ee; ii++)
#define frv(ii, ite, vv) for(vector<ite>::iterator ii = vv.begin(); ii != vv.end(); ii++)
#define frs(ii, ite, vv) for(set<ite>::iterator ii = vv.begin(); ii != vv.end(); ii++)
#define frq(ii, ite, vv) for(queue<ite>::iterator ii = vv.begin(); ii != vv.end(); ii++)

int mas[110][110];

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n, m;
	cin >> n >> m;
	fr(i, n)
		fr(j, m)
			cin >> mas[i][j];
	int r1 = -INF, mx, mn, r2 = INF;
	fr(i, n)
	{
		mn = INF;
		fr(j, m)
			mn= min(mn, mas[i][j]);
		r1 = max(r1, mn);
	}
	fr(j, m)
	{
		mx = -INF;
		fr(i, n)
			mx = max(mx, mas[i][j]);
		r2 = min(r2, mx);
	}
	printf("%i %i", r1, r2);
}