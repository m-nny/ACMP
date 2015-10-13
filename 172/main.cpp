
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
//		if ((i != 1) && (i1[i] != '0'))
			a.d.pb(i1[i1.size() - i - 1] - '0');
	return a;
}

N Div(N a, int b)
{
	str out = "";
	int x = 0;
	bool k = 0;
	fr(i, a.d.size())
	{
		x = x*10+a.d[a.d.size()-i-1];
		if (x < b && !k && i>1)
			continue;
		k = 1;
		out+=(char)(x/b+'0');
//		cout << x/b << " " << x << "\n";
		x = x%b;
	}
	N outN = Read(out);
	vector<short>::iterator it = outN.d.end();
	it--;
	while (*it==0)
		outN.d.erase(it), it--;
	return outN;
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
	str i1;
	int k;
	cin >> i1 >> k;
	N a;
	a = Read(i1);
	Write(Div(a, k));
}