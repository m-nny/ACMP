
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
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
	str a, b;
	cin >> a >> b;
	short ma[3010], mb[3010];
	int sa = a.size(), sb = b.size();
	int mx = -1, ux;
	int mn = 10, un;
	fr(i, sa)
	{
		ma[i] = (int)(a[i]-'0');
	}
	fr(i, sb)
		mb[i] = (int)(b[i]-'0'), mn = min(mn, mb[i]);
	fr(i, sa)
		ma[i] = ma[(i+)]
}