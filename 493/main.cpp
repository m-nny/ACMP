
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
#define mk make_pair
#define F first
#define S second
#define fr(ii, ee) for (int ii = 0; ii < ee; ii++)
#define frv(ii, ite, vv) for(vector<ite>::iterator ii = vv.begin(); ii != vv.end(); ii++)
#define frs(ii, ite, vv) for(set<ite>::iterator ii = vv.begin(); ii != vv.end(); ii++)
#define frq(ii, ite, vv) for(queue<ite>::iterator ii = vv.begin(); ii != vv.end(); ii++)

int n, m;
bool p[110][110], us[110][110];

void dfs(int x, int y)
{
//	cerr << x << " " << y << " " << us[y][x]<<'\n';
	us[y][x] = 1;
	if (y > 0 && !us[y-1][x])
	{
		if (p[y-1][x])
			dfs(y-1, x);
		else
			p[y][x] = 0;
	}
	if (x > 0 && !us[y][x-1])
	{
		if (p[y][x-1])
			dfs(y, x-1);
		else
			p[y][x] = 0;
	}
	if (x < n && !us[y][x+1])
	{
		if (p[y][x+1])
			dfs(y, x+1);
		else
			p[y][x] = 0;
	}
	if (y < n && !us[y+1][x])
	{
		if (p[y+1][x])
			dfs(y+1, x);
		else
			p[y][x] = 0;
	}
}

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	char x;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
		{
			cin >> x;
			if (x == '.')
				p[i][j] = 1;
		}
	for (int sy = 0; sy < n; sy++)
	{
		for (int sx = 0; sx < m; sx++)
			cerr << us[sy][sx];
		cerr << '\n';
	}
/*	for (int sy = 0; sy < n; sy++)
		for (int sx = 0; sx < m; sx++)
			if (!us[sy][sx] && p[sy][sx])*/
	int sx = 3, sy = 3;
				dfs(sx, sy);
	for (int sy = 0; sy < n; sy++)
	{
		for (int sx = 0; sx < m; sx++)
			cerr << us[sy][sx];
		cerr << '\n';
	}
}