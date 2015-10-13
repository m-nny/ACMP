
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
#define fbr(ii, bb, ee) for (int ii = bb; ii < ee; ii++)
#define frv(ii, ite, vv) for(vector<ite>::iterator ii = vv.begin(); ii != vv.end(); ii++)
#define frs(ii, ite, vv) for(set<ite>::iterator ii = vv.begin(); ii != vv.end(); ii++)
#define frq(ii, ite, vv) for(queue<ite>::iterator ii = vv.begin(); ii != vv.end(); ii++)

int n, m, t[110][110];
int us[110][110];

int rec(int y, int x)
{
	if (x == m-1 && y == n-1)
		return t[y][x];
//	printf("%i %i %i %i %i\n", x, y, t[y][x], n, m);
/*	if (us[y][x] != -1)
		return us[y][x];*/
	int a, b;
	if (y+1 < n)
		a = rec(y+1, x);
	else
		a = INF;
	if (x+1 < m)
		b = rec(y, x+1);
	else
		b = INF;
//	us[y][x] = t[y][x]+min(a, b);
	return min(a, b)+t[y][x];
}

int main()
{
	clock_t NOW = clock();
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	cin >> n >> m;
	fr(i, n)
		fr(j, m)
			cin >> t[i][j], us[i][j] = -1;
	cout << rec(0, 0);
	NOW = clock()-NOW;
	cerr<<((float)(NOW))/CLOCKS_PER_SEC;
}