
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
#define INF (int)(1e6+7)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define fr(ii, ee) for (int ii = 0; ii < ee; ii++)
#define frv(ii, ite, vv) for(vector<ite>::iterator ii = vv.begin(); ii != vv.end(); ii++)
#define frs(ii, ite, vv) for(set<ite>::iterator ii = vv.begin(); ii != vv.end(); ii++)
#define frq(ii, ite, vv) for(queue<ite>::iterator ii = vv.begin(); ii != vv.end(); ii++)

pair<int, int> mas[110];

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n, x;
	cin >> n;
	fr(i, 110)
		mas[i] = mp(-1, -1);
	int res = -1;
	fr(i, n)
	{
		cin >> x;
		mas[x].F = mas[x].S;
		mas[x].S = i;
		if (mas[x].S-mas[x].F > res && mas[x].F != -1)
		{
			res = mas[x].S-mas[x].F;
//			printf("S = %i, F = %i, R = %i, i = %i, x = %i\n", mas[x].S, mas[x].F, res, i, x);
		}
	}
	cout << res;
}