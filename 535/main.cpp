
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
	vector <short> d;
};

N Read(str i1)
{
	N a;
	fr(i, i1.size())
		a.d.pb(i1[i1.size() - i - 1] - '0');
	return a;
}

void Write(N in)
{
	fr(i, in.d.size())
		cout << (in.d[in.d.size() - i - 1]);
}

N iadd(N a, N b)
{
	N out;
	if (a.d.size() < b.d.size())
		swap(a, b);
	fr(i, a.d.size())
	{
		int bu = a.d[i] + b.d[i];
		out.d.pb(bu%10);
		if (bu > 9)
			out.d.pb(bu/10);
	}
//	Write(out);
	return out;
}

int main()
{
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
	str i1, i2, i3;
	cin >> i1 >> i2 >> i3;
	N a, b, c;
	a = Read(i1), b = Read(i2), c = Read(i3);
	N r1 = iadd(iadd(a, b), c), r2 = iadd(iadd(a, c), b), r3 = iadd(iadd(b, c), a);
	Write(r1);
	puts("");
	Write(r2);
	puts("");
	Write(r3);
	puts("");
}