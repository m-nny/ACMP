
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

int cnt[210];

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n;
	int mas[110], mn = -1, uk = INF;
	cin >> n;
	fr(i, n)
	{
		cin >> mas[i];
		cnt[mas[i]+100]++;
		if (cnt[mas[i]+100] > mn)
			mn = cnt[mas[i]+100], uk = mas[i];
		if (cnt[mas[i] + 100] == mn)
			mn = cnt[mas[i]+100], uk = min(uk, mas[i]);
	}
	fr(i, n)
		if (mas[i] != uk)
			cout << mas[i] << " ";
	fr(i, mn)
		cout << uk << " ";
}