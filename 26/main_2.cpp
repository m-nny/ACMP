
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
	double x1, y1, x2, y2, r1, r2;
	cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
	double r = (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);
	double rr = sqrt(r+.0);
//	printf("%f %f %f\n", r1, r2, rr);
	if (((r1+r2) >= rr) && ((r1 + rr) >= r2) && ((rr + r2) >= r1))
		cout << "YES";
	else
		cout << "NO";
}