
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
	double r = .0;
	int n, x, y, px = 0, py = 0, t;
	cin >> n;
	fr(i, n)
	{
		cin >> x >> y;
		t = (x-px)*(x-px)+(y-py)*(y-py);
		r += sqrt(t+.0);
		px = x;
		py = y;
	}
	t = ((px)*(px)+(py)*(py));
	r += sqrt(t+.0);
	printf("%.3f", r);
}