
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
#define fbr(ii, bb, ee) for (int ii = bb; ii < ee; ii++)
#define frv(ii, ite, vv) for(vector<ite>::iterator ii = vv.begin(); ii != vv.end(); ii++)
#define frs(ii, ite, vv) for(set<ite>::iterator ii = vv.begin(); ii != vv.end(); ii++)
#define frq(ii, ite, vv) for(queue<ite>::iterator ii = vv.begin(); ii != vv.end(); ii++)

bool Is(int n, int s)
{
	str out = "";
	while (n > 0)
	{
		int x = n%s;
		if (x > 9)
			out+=(char)(x+'A');
		else
			out+=(char)(x+'0');
		n = n/s;
	}
	fr (i, out.size()/2)
		if (out[i] != out[out.size() - i - 1])
			return 0;
	return 1;
}

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n;
	cin >> n;
	vector<short> v;
	fbr(i, 2, 37)
		if (Is(n, i))
			v.pb(i);
	if (v.empty())
		cout << "none";
	else
	if (v.size() == 1)
	{
		puts("unique");
		cout << v[0];
	}
	else
	{
		puts("multiple");
		fr(i, v.size())
			cout << v[i] << " ";
	}
}