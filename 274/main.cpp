
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
	int k;
	cin >> k;
	fr(kk, k)
	{
		bool a[10], b[10];
		fr(i, 10)
			a[i] = 0, b[i] = 0;
		int x, y;
		cin >> x >> y;
		while (x > 0)
			a[x%10] = 1, x/=10;
		while (y > 0)
			b[y%10] = 1, y/=10;
		bool fl = 1;
		fr(i, 10)
			fl = fl &(a[i]==b[i]);
		if (fl)
			puts("YES");
		else
			puts("NO");
	}
}