
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

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	vector<int> ve;
	vector<int> nv, pv;
	ll po = 0, ne = 0;
	int n, bq, np = 0, nn = 0;
	cin >> n;
	fr(i, n)
	{
		cin >> bq;
		ve.pb(bq);
		if (bq > 0)
			po += bq, np++, pv.pb(i);
		if (bq < 0)
			ne -= bq, nn++, nv.pb(i);
	}
	if (ne > po)
	{
		cout << nv.size() << "\n";
		frv(i, int, nv)
			cout << (*i)+1 << " ";
	}
	else
	{
		cout << pv.size() << "\n";
		frv(i, int, pv)
			cout << (*i)+1 << " ";
	}
}