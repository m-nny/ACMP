
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

struct nm
{
	vector<short>dig;
};

nm add(nm in, short a)
{
	int sz = in.dig.size();
	nm out;
	int b = a;
	for (int i = sz - 1; i >= 0; i--)
	{
		out.dig.pb((in.dig[i]+b)%10);
		b = (in.dig[i]+b)/10;
	}
	if (b > 0)
		out.dig.pb(b);
	reverse(out.dig.begin(), out.dig.end());
	return out;
}

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	nm in, out;
	out.dig.pb(0);
	str s;
	int cnt = 0;
	cin >> s;
	fr(i, s.length())
		in.dig.pb((int)(s[i]-'0'));
	while (in.dig.size() > 1)
//	fr(i, 2)
	{
		out.dig.clear();
		out.dig.pb(0);
		fr(i, in.dig.size())
			out = add(out, in.dig[i]);
		in = out;
		cnt++;
/*		frv(i, short, in.dig)
			cerr << *i;
		cerr << '\n';*/
	}
	frv(i, short, in.dig)
		cout << *i;
	printf(" %i", cnt);
}