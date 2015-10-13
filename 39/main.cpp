
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

int C[110], n;

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	cin >> n;
	fr(i, n)
		cin >> C[i];
	int res = 0;
	int p = -1;
	while (p < n)
	{
		int k = -1, mx = -1;
		for(int i = p+1; i < n; i++)
		{
			if (C[i] > mx)
				mx = C[i], k = i;
		}
		res += (C[k]*(k-p));
		p = k;
		if (p == -1)
			break;
//		cout << res << " " << p << " " << k << " " << '\n';
	}
	cout << res;
}