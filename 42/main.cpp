
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

ll pw(int a, int k)
{
	if (k == 0)
		return 1;
	if (k == 1)
		return a;
	ll res = pw(a, k/2);
	res *= res;
	if (k % 2 == 1)
		res *= a;
	return res;
}

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n, x, y;
	cin >> n;
	if (n < 3)
	{
		cout << n;
		return 0;
	}
	x = n/3;
	n -= x*3;
	while (n % 2 != 0)
	{
		n += 3;
		x--;
	}
	y = n/2;
	ll res = pw(3, x)*pw(2, y);
	cout << res;
}