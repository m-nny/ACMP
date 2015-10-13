
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

bool a0[10], b0[10], c0[10];

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	str a, b, c;
	cin >> a >> b >> c;
	fr(i, a.size())
		a0[(int)(a[i]-'0')] = 1;
	fr(i, b.size())
		b0[(int)(b[i]-'0')] = 1;
	fr(i, c.size())
		c0[(int)(c[i]-'0')] = 1;
	vector<int> v;
	fr(i, 10)
	{
//		printf("%i %i %i\n", a0[i], b0[i], c0[i]);
		if (a0[i] && b0[i] && c0[i])
			v.pb(i);
	}
	cout << v.size() << '\n';
	fr(i, v.size())
		cout << v[i] << " ";
}