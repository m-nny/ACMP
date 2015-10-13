
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
	int n, m, x, y;
	cin >> m >> n >> x >> y;
	if (abs(m-x)==abs(n-y))
	{
		cout << (m != x);
		return 0;
	}
	if ((m+n)%2==(x+y)%2)
	{
		cout << 2 << '\n';
		int xx = m, yy = n;
		while (abs(xx-x)!=abs(yy-y) && xx < 8 && yy < 8)
			xx++, yy++;
		if (abs(xx-x)==abs(yy-y))
		{
			cout << xx << " " << yy;
			return 0;
		}
		xx = m, yy = n;
		while(abs(xx-x)!=abs(yy-y) && xx > 1 && yy > 1)
			xx--, yy--;
		if (abs(xx-x)==abs(yy-y))
		{
			cout << xx << " " << yy;
			return 0;
		}
		xx = m, yy = n;
		while(abs(xx-x)!=abs(yy-y) && xx > 1 && yy < 8)
			xx--, yy++;
		if (abs(xx-x)==abs(yy-y))
		{
			cout << xx << " " << yy;
			return 0;
		}
		xx = m, yy = n;
		while(abs(xx-x)!=abs(yy-y) && xx < 8 && yy > 1)
			xx++, yy--;
		if (abs(xx-x)==abs(yy-y))
		{
			cout << xx << " " << yy;
			return 0;
		}
	}
	cout << 0;
}