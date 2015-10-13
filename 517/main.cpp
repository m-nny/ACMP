
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

int mas[30];

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n;
	cin >> n;
	fr(i, n)
		cin >> mas[i];
	int res = 0;
	int uk = 0;
	fr(i, 30)
		cerr << mas[i] << " ";
	cerr << '\n';
	while (uk < n)
	{
		cerr << uk << " " ;
		if (mas[uk] == 10)
			res += 10 + mas[uk+1] + mas[uk+2], uk++;
		else
			if (mas[uk] + mas[uk+1] == 10)
				res += 10 + mas[uk+2], uk+=2;
		cerr << mas [uk] << " " << res << '\n';
	}
	cerr << '\n' << res;
	cout << res;
}