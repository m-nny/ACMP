
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

N add(N a, N b)
{
	N out;
	if (b.d.size() > a.d.size())
		swap(a, b);
	int bu = 0;
	fr(i, a.d.size())
	{
		if (i < b.d.size())
		{
			out.d.pb((a.d[i]+b.d[i] + bu)%10);
			bu = (a.d[i] + b.d[i] + bu)/10;
		}
		else
		{
			out.d.pb((a.d[i] + bu)%10);
			bu = (a.d[i] + bu)/10;
		}
	}
	if (bu > 0)
		out.d.pb(bu);
	return out;
}

N Read(str i1)
{
	N a;
	fr(i, i1.size())
	{
		a.d.pb(i1[i1.size() - i - 1] - '0');
	}
	return a;
}

void Write(N in)
{
	fr(i, in.d.size())
		cout << (in.d[in.d.size() - i - 1]);
}

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	str i1, i2;
	cin >> i1 >> i2;
	N a, b;
	a = Read(i1), b = Read(i2);
	N out = add(a, b);
	Write(out);
}