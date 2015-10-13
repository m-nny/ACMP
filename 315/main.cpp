
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
#define bl(xx, bb, ee) ((bb <= xx)&&(xx <= ee))

str in;

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	getline(cin, in);
	int m = 0;
	fr(i, in.length())
	{
		if (bl(in[i], '0', '9'))
			m = max(m, (int)(in[i]-'0'));
		else
		if (bl(in[i], 'A', 'Z'))
			m = max(m, (int)(in[i]-'A'+10));
		else
		{
			cout << -1;
			return 0;
		}
	}
	if (m < 1)
		cout << 2;
	else
		cout << m+1;
}