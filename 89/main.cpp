
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

int a, b, c, d;
str name, mn, ln;
int mini = INF;
int t;

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n;
	cin >> n;
	getline(cin, ln);
	for (int qqw = 0; qqw < n; qqw++)
	{
		getline(cin, ln);
		int uk = -1;
		fr(i, ln.length())
			if (ln[i] == 34)
				uk = i;
		name = "";
		fr(i, uk+1)
			name+=ln[i];
//		cerr << name << " " << ln << "!\n";
//		name = ln.substr(0, uk +1);
		str qff = "";
		fbr(i, uk+2, ln.size())
			qff+=ln[i];
		ln = qff;
		a = (int)(ln[0] - '0') * 10 + (int)(ln[1] - '0');
		b = (int)(ln[3] - '0') * 10 + (int)(ln[4] - '0');
		c = (int)(ln[6] - '0') * 10 + (int)(ln[7] - '0');
		d = (int)(ln[9] - '0') * 10 + (int)(ln[10] - '0');
		b += a * 60;
		d += c * 60;
		if (b >= d)
			t = 24*60 - b + d;
		else
			t = d - b;
		if (t < mini)
		{
			mini = t;
			mn = name;
		}
	}
	printf("The fastest train is ");
	cout << mn;
	double qw = (650 * 60.0 /mini);
	printf(".\nIt's speed is %i km/h, approximately.", (int)(qw+.5));
}