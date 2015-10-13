
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

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	str in, out="";
	cin >> in;
	int n = 0;
	char x;
	fr(i, in.length())
	{
		if (in[i] <= '9' && in[i] >= '0')
			n = n * 10 + (int)(in[i] - '0');
		else
		{
			x = in[i];
			fr(i, n)
				out += x;
			if (n == 0)
				out += x;
			n = 0;
		}
	}
	fr(i, out.length())
	{
		cout << out[i];
		if ((i+1) % 40 == 0)
			puts("");
	}
}