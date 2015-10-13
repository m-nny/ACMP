
#include <iostream>
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
#define mk make_pair
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
	int a[3], b[3];
	bool fl;
	for (int i = 0; i < 3; i++)
		cin >> a[i];
	for (int i = 0; i < 3; i++)
		cin >> b[i];
	sort(a, a+3);
	sort(b, b+3);
	fl = 1;
	for (int i = 0; i < 3; i++)
		fl = fl && (a[i] == b[i]);
	if (fl)
	{
		printf("Boxes are equal");
		return 0;
	}
	fl = 1;
	for (int i = 0; i < 3; i++)
		fl = fl && (a[i] >= b[i]);
	if (fl)
	{
		printf("The first box is larger than the second one");
		return 0;
	}
	fl = 1;
	for (int i = 0; i < 3; i++)
		fl = fl && (a[i] <= b[i]);
	if (fl)
	{
		printf("The first box is smaller than the second one");
		return 0;
	}
	printf("Boxes are incomparable");
}