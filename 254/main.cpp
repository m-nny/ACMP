
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

int n;
vector<int> mas[5010], res[5010];

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	cin >> n;
	vector<int> ans(n);
	fr(i, n)
	{
		int x;
		cin >> x;
		mas[x].pb(i);
		ans[i] = x;
	}
	int m, a, b;
	cin >> m;
	fr(i, m)
	{
		cin >> a >> b;
		fr(j, mas[a].size())
			ans[mas[a][j]] = b;
	}
	fr(i, n)
		cout << ans[i] << " ";
}