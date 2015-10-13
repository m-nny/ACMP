
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
	int n;
	int r, l = 1;
	cin >> n;
	int c = (n+3)/4;
	r = c * 4;
	int i = 1, j = 1;
	bool fl = 1;
	while (r > l && l <= n)
	{
		printf("%i %i ", i, j);
		if (r > n)
		{
			if (fl)
				printf("0 %i\n", l);
			else
				printf("%i 0\n", l);
		}
		else
		if (fl)
			printf("%i %i\n", r, l);
		else
			printf("%i %i\n", l, r);
		j++, r--, l++;
		if (j == 3)
			i++, j = 1;
		fl = !fl;
	}
}