
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
	int k;
	cin >> in >> k;
	if (k > 0)
	{
		int uk = 0;
		fr(i, k)
			for(int j = 0; j < in.size() && uk < 1023; j++)
				cout << in[j], uk++;
		return 0;
	}
	if (k < 0)
	{
		k = -k;
		int sz = in.size(), ls = sz/k;
		if (sz % k != 0)
		{
			puts("NO SOLUTION");
			return 0;
		}
		set<str> se;
		for(int j = 0; j < sz; j+=ls)
			se.insert(in.substr(j, ls));
		if (se.size()!=1)
		{
			puts("NO SOLUTION");
			return 0;
		}
		else
			cout << (*se.begin());
	}
}