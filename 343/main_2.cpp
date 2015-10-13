
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
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define fr(ii, ee) for (int ii = 0; ii < ee; ii++)
#define fbr(ii, bb, ee) for (int ii = bb; ii < ee; ii++)
#define fn ""
#define frv(ii, ite, vv) for(vector<ite>::iterator ii = vv.begin(); ii != vv.end(); ii++)
#define frs(ii, ite, vv) for(set<ite>::iterator ii = vv.begin(); ii != vv.end(); ii++)
#define frq(ii, ite, vv) for(queue<ite>::iterator ii = vv.begin(); ii != vv.end(); ii++)

const int inf = (int)(1e9+7), maxn = (int)(1e5);
double eps = (1e-7);

int us[55][55];
int n, m, k, c, ans;

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	cin >> n >> m;
	cin >> k;
	c++;
	for(int i = 0; i < k; i++)
	{
		int q, x, y;
		cin >> q >> y >> x;
		if (x <= m && y <= n && x > 0 && y > 0)
		{
			if (q == 1)
				if (!us[y][x+1] && !us[y+1][x+1] && !us[y+1][x])
					us[y][x+1] = c, us[y+1][x+1] = c, us[y+1][x] = c, c++;
			if (q == 2)
				if (!us[y][x] && !us[y+1][x] && !us[y+1][x+1])
					us[y][x] = c, us[y+1][x] = c, us[y+1][x+1] = c, c++;
			if (q == 3)
				if (!us[y][x] && !us[y][x+1] && !us[y+1][x+1])
					us[y][x] = c, us[y][x+1] = c, us[y+1][x+1] = c, c++;
			if (q == 4)
				if (!us[y][x] && !us[y][x+1] && !us[y+1][x])
					us[y][x] = c, us[y][x+1] = c, us[y+1][x] = c, c++;
		}
	}
	for(int i = 1; i <= n; i++)
	{
/*		for(int j = 1; j <= m; j++)
			cout << us[i][j] << " ";*/
		for(int j = 1; j <= m; j++)
			ans += us[i][j];
//		puts("");
	}
	cout << c * 3 - 3;
//	c--;
//	cout << c * 3<< " " << c;
}