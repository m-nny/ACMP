
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

int us[220][220];
int x = 100, y = 100;
int n = 0;

void mv()
{
	us[y][x] = 1;
	if (n == 0)
		y--;
	if (n == 1)
		x++;
	if (n == 2)
		y++;
	if (n == 3)
		x--;
}

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	str in;
	cin >> in;
	int cnt = 0;
	fr(i, in.size())
	{
		if (in[i] == 'S')
			mv(), cnt++;
		if (in[i] == 'L')
			n = (n+3)%4;
		if (in[i] == 'R')
			n = (n+1)%4;
		if (us[y][x])
		{
			cout << cnt;
			return 0;
		}
	}
	cout << -1;
}