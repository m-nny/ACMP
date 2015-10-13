
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

struct D
{
	vector<short> d, v;
	bool p;
};

D a, b;

void ex(int x, bool sp)
{
	if (x == 0)
	{
		cout << '=';
		exit(0);
	}
	if (sp)
	{
		if (!a.p)
		{
			if (x == 2)
			{
				cout << '>';
				exit(0);
			}
			if (x == 1)
			{
				cout << '<';
				exit(0);
			}
		}
		if (x == 1)
		{
			cout << '>';
			exit(0);
		}
		if (x == 2)
		{
			cout << '<';
			exit(0);
		}
	}
	if (x == 1)
	{
		cout << '>';
		exit(0);
	}
	if (x == 2)
	{
		cout << '<';
		exit(0);
	}
}


D Read()
{
	D a;
	str a1;
	cin >> a1;
	int uk = 0;
	if (a1[0] == '-')
		uk++, a.p = 0;
	else
		a.p = 1;
	while (a1[uk] != '.' && uk < a1.size())
		a.d.pb(a1[uk]-'0'), uk++;
	uk++;
	while (uk < a1.size())
		a.v.pb(a1[uk] - '0'), uk++;
	return a;
}

void ct()
{
	int sz = max(a.v.size(), b.v.size());
	{
		printf("%i %i %i\n", a.v.size(), b.v.size(), sz);
		fr(i, a.d.size())
			cout << a.d[i];
		cout << '.';
		fr(i, a.v.size())
			cout << a.v[i];
		puts("");
		fr(i, b.d.size())
			cout << b.d[i];
		cout << '.';
		fr(i, b.v.size())
			cout << b.v[i];
		puts("");
	}	
}

int main()
{
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
	str a1, b1;
	a = Read(), b = Read();
	if (a.p != b.p)
		ex(b.p+1, 0);
	if (a.d.size() > b.d.size())
		ex(1, 1);
	if (a.d.size() < b.d.size())
		ex(2, 1);
	fr(i, a.d.size())
	{
		if (a.d[i] != b.d[i])
			ex((a.d[i] < b.d[i])+1, 1);
	}
	int sz = max(a.v.size(), b.v.size());
	ct();
	if (a.v.size() == 0 || b.v.size() == 0)
		ex ((a.v.size()==0)+1, 1);
	fr(i, (sz - a.v.size())*2)
		a.v.pb(0);
	fr(i, (sz - b.v.size())*2)
		b.v.pb(0);
	ct();
	fr(i, sz)
	{
		if (a.v[i] != b.v[i])
			ex((a.v[i] < b.v[i])+1, 1);
	}
	ex(0, 1);
}