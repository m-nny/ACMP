
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
	double q;
	bool fl = 1;
	cin >> n >> q;
	fr(i, n)
	{
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		int x = a*a+b*b, y = c*c+d*d;
		double xx = x * 1.0 * q, yy = y+.0;
		if (xx < y)
			fl = 0;
	}
	if (fl)
		cout << "Yes";
	else
		cout << "No";
}