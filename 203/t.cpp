
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

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	str a, b, sa;
	cin >> a >> b;
	sa = a;
	clock_t NOW = clock();
	vector<int> uk;
	for(int i = 0; i < a.size(); i++)
		if (a[0] == b[i])
				uk.pb(i);
	for(int it = 0; it < uk.size(); it++)
	{
		int i = uk[it];
		rotate(a.begin(), a.end()-i, a.end());
		if (a == b)
		{
			cout << i;
			return 0;
		}
		else
			a = sa;
	}
	cout << -1;
}