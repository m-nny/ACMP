
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

int mas[1010], n;

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	cin >> n;
	fr(i, n)
		cin >> mas[i];
	sort(mas, mas+n);
	int fi = mas[0], la, sz = 1;
	bool fl = 0;
	cout << mas[0];
	fbr(i, 1, n)
	{
		if (mas[i] - mas[i-1] == 1 || mas[i] == mas[i-1])
			fl = 1, la = mas[i], sz++;
		else
		{
			if (sz == 3 && mas[i-1] <=99 && mas[i-1] >= -9)
				printf(", %i, %i", mas[i-2], mas[i-1]);
			else
			if (fl)
				cout << ", ..., " << la;
			cout << ", " << mas[i], fi = mas[i];
			fl = 0;
			sz = 0;
		}
	}
	if (sz == 3 && mas[n-2] <=99 && mas[n-2] >= -9)
		printf(", %i, %i", mas[n-2], mas[n-1]);
	else
	if (fl)
		cout << ", ..., " << mas[n-1];
}