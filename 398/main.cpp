
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
#define fr(ii, ee) for (int ii = 1; ii < ee; ii++)
#define fbr(ii, bb, ee) for (int ii = bb; ii < ee; ii++)
#define frv(ii, ite, vv) for(vector<ite>::iterator ii = vv.begin(); ii != vv.end(); ii++)
#define frs(ii, ite, vv) for(set<ite>::iterator ii = vv.begin(); ii != vv.end(); ii++)
#define frq(ii, ite, vv) for(queue<ite>::iterator ii = vv.begin(); ii != vv.end(); ii++)

int main()
{
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
	int n, cnt = 0;
	int d;
	cin >> n;
	fr (a, n)
		fbr(b, a, n)
		{
			fbr(c, b, n)
			{
				d = n - a - b - c;
//				printf("%i %i %i %i\n", a, b, c, d);
				if (d <= 0)
					break;
				if (d >= c)
					cnt++;
			}
		}
	cout << cnt;
}