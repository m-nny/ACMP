
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

pair<int, int> p[5], m[5];
int a, b;
bool q[5];

void fl()
{
	fr(i, 5)
		p[i] = mp(i*25, 0);
}

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	fr(i, 5)
	{
		cin >> a >> b;
		m[i]=mp(a, b);
	}
	fl();
	for (int i = 0; i < 5; i++)
	{
		int x = m[i].F, y = m[i].S;
		fr(j, 5)
		{
			if ((abs(x-p[j].F) <= 10) && (abs(y-p[j].S) <= 10))
				q[j] = 1;
		}
	}
	int cnt = 0;
	fr(i, 5)
		cnt += q[i];
	cout << cnt;
}