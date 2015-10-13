
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
#define bl(ii, bb, ee) ((bb <= ii)&&(ii <= ee))
#define frv(ii, ite, vv) for(vector<ite>::iterator ii = vv.begin(); ii != vv.end(); ii++)
#define frs(ii, ite, vv) for(set<ite>::iterator ii = vv.begin(); ii != vv.end(); ii++)
#define frq(ii, ite, vv) for(queue<ite>::iterator ii = vv.begin(); ii != vv.end(); ii++)

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	str in;
	cin >> in;
	int n = 2;
	if (bl(in[0], 'a', 'z'))
	{
		cout << "No";
		return 0;
	}
	fr(i, in.length())
	{
		if (bl(in[i], 'A', 'Z'))
		{
			if (bl(n, 2, 4))
			{
				n = 1;
				continue;
			}
			else
			{
				cout << "No";
				return 0;
			}
		}
		if (bl(in[i], 'a', 'z'))
			n++;
	}
	if (bl(n, 2, 4))
	{
		cout << "Yes";
		return 0;
	}
	else
	{
		cout << "No";
		return 0;
	}
}