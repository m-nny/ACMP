
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

bool us[55][55];
int n, m, k;

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	cin >> n >> m >> k;
	for(int i = 0; i < k; i++)
	{
		int q, x, y;
		cin >> q >> y >> x;
		if (x + 1 <= m && y + 1 <= n)
		{
			if (q == 1)
				if (!us[x+1][y+1] && !us[x+1][y] && !us[x][y+1])
					us[x+1][y+1] = 1, us[x+1][y] = 1, us[x][y+1] = 1;
			if (q == 2)
				if (!us[x+1][y+1] && !us[x][y] && !us[x][y+1])
					us[x+1][y+1] = 1, us[x][y] = 1, us[x][y+1] = 1;
			if (q == 3)
				if (!us[x+1][y+1] && !us[x][y] && !us[x][y+1])
					us[x+1][y+1] = 1, us[x][y] = 1, us[x][y+1] = 1;
			if (q == 4)
				if (!us[x][y] && !us[x+1][y] && !us[x][y+1])
					us[x][y] = 1, us[x+1][y] = 1, us[x][y+1] = 1;
		}
		for(int i = 1; i <= n; i++)
		{
			for(int j = 1; j <= m; j++)
				cerr << us[i][j];
			cerr << '\n';
		}
		cerr << '\n';
	}
	int ans = 0;
	for(int i = 1; i <= m; i++)
	{
		for(int j = 1; j <= n; j++)
			ans += us[i][j];
/*		for(int j = 0; j <= m; j++)
			cerr << us[i][j];
		cerr << '\n';*/
	}
	cout << ans;
}