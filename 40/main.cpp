
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

struct N
{
	vector<short> d;
};

N pw(N in)
{
	N out;
	int b = 0;
	fr(i, in.d.size())
	{
		out.d.pb((in.d[i]*2+b)%10);
		b = (in.d[i]*2 + b)/10;
	}
	if (b > 0)
		out.d.pb(b);
	return out;
}

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n;
	cin >> n;
	N r;
	r.d.pb(1);
	fr(i, n)
		r = pw(r);
	fr(i, r.d.size())
		cout << r.d[r.d.size() - i - 1];
}