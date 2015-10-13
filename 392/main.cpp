
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
#define fre(ii, bb, ee) for (int ii = bb; ii < ee; ii++)
#define frv(ii, ite, vv) for(vector<ite>::iterator ii = vv.begin(); ii != vv.end(); ii++)
#define frs(ii, ite, vv) for(set<ite>::iterator ii = vv.begin(); ii != vv.end(); ii++)
#define frq(ii, ite, vv) for(queue<ite>::iterator ii = vv.begin(); ii != vv.end(); ii++)

vector<int> m;
int n;
/*
void ks(int k)
{
	vector<int> out(n);
	fr(i, n)	
		out[i] = m[(i+k)%n];
	frv(i, int, out)
		cout << *i << " ";	
	m = out;
}
*/
int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	cin >> n;
	int x, uk;
	fr(i, n)
	{
		cin >> x;
		m.pb(x);
		if (x == 1)
			uk = i;
	}
	cout << 1 << " ";
	fre (i, uk+1, n)
		cout << m[i] << " ";
	fr (i, uk)
		cout << m[i] << " ";
}