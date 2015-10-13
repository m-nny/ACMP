
#include <iostream>
#include <fstream>
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
#define ull unsigned long long
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
/*	clock_t now;
	now = clock();*/
	ull ans = 0l, n;
	cin >> n;
	for(ull i = 1; i <= 50600; i++)
	{
		ull D = (2*i-1)*(2*i-1) + 8l * n;
//		cout << i << " " << D << '\n';
		ull sq = (ull)(sqrt(D+.0));
		if (sq*sq==D)
			ans = max(ans, (-2*i+1+sq)/2);
	}
	cout << ans;
/*	now = clock()-now;
	cerr << ((float)now)/CLOCKS_PER_SEC;*/
}