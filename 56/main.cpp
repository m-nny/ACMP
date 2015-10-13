
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
#define INF (int)(1e9+7)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define fr(ii, ee) for (int ii = 0; ii < ee; ii++)
#define frv(ii, ite, vv) for(vector<ite>::iterator ii = vv.begin(); ii != vv.end(); ii++)
#define frs(ii, ite, vv) for(set<ite>::iterator ii = vv.begin(); ii != vv.end(); ii++)
#define frq(ii, ite, vv) for(queue<ite>::iterator ii = vv.begin(); ii != vv.end(); ii++)

typedef string str;

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	set <str> a, b, c;
	int n, m;
	cin >> n;
	str in;
	fr(i, n)
		cin >> in, a.insert(in);
	cin >> m;
	fr(i, m)
	{
		cin >> in;
		if (a.find(in)!=a.end())
			b.insert(in);
		else
			c.insert(in);
	}
	cout << "Friends: ";
	int uk = 0;
	frs(i, str, a)
	{
		uk++;
		cout << *i;
		if (uk != a.size())
			cout << ", ";
	}
	uk = 0;
	cout << "\nMutual Friends: ";
	frs(i, str, b)
	{
		uk++;
		cout << *i;
		if (uk != b.size())
			cout << ", ";
	}
	cout << "\nAlso Friend of: ";
	uk = 0;
	frs(i, str, c)
	{
		uk++;
		cout << *i;
		if (uk != c.size())
			cout << ", ";
	}
}