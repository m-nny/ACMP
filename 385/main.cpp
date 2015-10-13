
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
	int n;
	cin >> n;
	set <double> se;
	vector < pair < int, int > > p;
	fr (i, n)
	{
		int x, y;
		cin >> x >> y;
		p.pb(mp(x, y));
	}
	fr(i, n)
		fr(j, n)
		{
			double s = (p[i].F-p[j].F)*(p[i].F-p[j].F) + (p[i].S-p[j].S)*(p[i].S-p[j].S);
			if (s != 0)
				se.insert(sqrt(s));
		}
	cout << se.size() << '\n';
	frs(it, double, se)
		printf("%.12f\n", *it);
}