
#include <iostream>
#include <cmath>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <set>
#include <ctime>

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
#define bl(a1, a2, a3) (a1+a2>=a3)

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	double x1, y1, x2, y2;
	double r1, r2, r;
	cin >> x1 >> y1 >> r1;
	cin >> x2 >> y2 >> r2;
	r = (x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
	r = sqrt(r);
	if ((r == 0) || (r == r1 + r2))
	{
		cout << "YES";
		return 0;
	}
	if (bl(r1, r2, r) && bl(r1, r, r2) && bl(r, r2, r1))
	{
		cout << "YES";
		return 0;
	}
	cout << "NO";
}