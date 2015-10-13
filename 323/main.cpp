
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
	vector<int> v;
	vector<bool> pr(1000, 1);
	pr[0] = 0;
	pr[1] = 0;
	for(int i = 2; i * i <= 1000; i++)
		if (pr[i])
			for(int j = i * 2; j <= 1000; j+=i)
				pr[j] = 0;
	fr(i, 1000)
		if (pr[i])
			v.pb(i);
	int n;
	cin >> n;
	int sz = v.size();
	fr(i, sz)
	{
		int a = v[i], b = n - a;
		if (pr[b])
		{
			cout << min(a, b) << " " << max(a, b);
			return 0;
		}
	}
}