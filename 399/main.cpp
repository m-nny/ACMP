
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

bool mas[110][110];
int n, m;
int us[110][110];

int dfs(int x, int y, int np)
{
	int res = 0;
	if (mas[y+1][x] && (us[y+1][x] == 0))
		res += dfs(x, y+1, 1);
	else
	if (mas[y][x+1] && (us[y][x+1] == 0))
		res += dfs(x+1, y, 2);
	else
	if (mas[y-1][x] && (us[y-1][x] == 0))
		res += dfs(x, y-1, 3);
	else
	if (mas[y][x-1] && (us[y][x-1] == 0))
		res += dfs(x-1, y, 4);
	else
	{
		mn = INF;
		if (mas[y+1][x])
			mn = min(mn, us[y+1][x]);
		if (mas[y][x+1])
			mn = min(mn, us[y][x+1]);
		if (mas[y-1][x])
			mn = min(mn, us[y-1][x]);
		if (mas[y][x-1])
			mn = min(mn, us[y][x-1]);
		if ()
	}
	return 0;
}

int main()
{
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
	cin >> n >> m;
	str in;
	getline(cin, in);
	fbr(i, 1, n+1)
	{
		getline(cin, in);
		fr(j, m)
			mas[i][j+1] = (in[j] == '@');
	}
	fbr(i, 1, n+1)
	{
		fbr(j, 1, m+1)
			cout << mas[i][j];
		puts("");
	}
	
	int res = dfs(2, 2, 1);
	cout << "\n\n" << res;
}