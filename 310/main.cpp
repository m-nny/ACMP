
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
	int k;
	cin >> k;
	while (k)
	{
		ll a, b, c, d;
		cin >> a >> b >> c;
//		cerr << a << " " << b << " " << c << '\n';
		if (((a-1)%c==0)&&((b-1)%c==0))
			cout << 1;
		else
		if (((a-2)%c==0)&&(b%c==0))
			cout << 1;
		else
		if ((a%c==0)&&((b-2)%c==0))
			cout << 1;
		else
		if (((a-2)%c==0)&&((b-1)%c==0)&&(a%c==0))
			cout << 1;
		else
		if (((b-2)%c==0)&&((a-1)%c==0)&&(b%c==0))
			cout << 1;
		else
			cout << 0;
		k--;
	}
}