
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
short p[110][110];

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	char xe;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
		{
			cin >> xe;
			if (xe == '.')
				p[i][j] = 1;
			if (xe == '*')
				p[i][j] = 2;
		}
/*	for (int y = 0; y < n; y++)
	{
		for (int x = 0; x < m; x++)
			cerr << p[y][x];
			if (p[y][x] == 1)
				cnt++;
		cerr << '\n';
	}*/
	for (int y = 0; y < n; y++)
		for (int x = 0; x < m; x++)
		if (p[y][x] == 1)
		{
			if ((y > 0) && (p[y-1][x] == 2))
				p[y][x] = 3;
			if ((x > 0) && (p[y][x-1] == 2))
				p[y][x] = 3;
			if ((y < n) && (p[y+1][x] == 2))
				p[y][x] = 3;
			if ((x < m) && (p[y][x+1] == 2))
				p[y][x] = 3;
		}
	int cnt = 0;
	for (int y = 0; y < n; y++)
	{
		for (int x = 0; x < m; x++)
//			cerr << p[y][x];
			if (p[y][x] == 1)
				cnt++;
//		cerr << '\n';
	}
	cout << cnt;
}