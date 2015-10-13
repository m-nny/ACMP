
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
	str in;
	cin >> in;
	int ux, ua, ub, x;
	bool fl;
	fr(i, in.length())
	{
		if (in[i] == 'x')
			ux = i;
		if (in[i] == '+')
			fl = 1;
		if (in[i] == '-')
			fl = 0;
	}
	if (ux == 0)
	{
		if (fl)
			x = (int)(in[4] - in[2]);
		else
			x = (int)(in[4]-'0')+(int)(in[2] - '0');
	}
	if (ux == 2)
	{
		if (fl)
			x = (int)(in[4] - in[0]);
		else
			x = (int)(in[0] - in[4]);
	}
	if (ux == 4)
	{
		if (fl)
			x = (int)(in[0] - '0') + (int)(in[2] - '0');
		else
			x = (int)(in[0] - in[2]);
	}
	cout << x;
}