
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
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
	int k, n;
	cin >> k >> n;
	str mas[1010];
	int mx = -1;
//	getline(cin, mas[1009]);
	fr(i, n)
	{
		getline(cin, mas[i]);
		cin >> mas[i], mx = max((int)mas[i].size(), mx);
	}
	if (mx > k)
	{
		cout << "Impossible.";
		return 0;
	}
	fr(i, n)
	{
		cout << mas[i] << '\n';
	}
}