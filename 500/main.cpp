
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

int dp[10010];
vector < pair < int, int > > ve;

int rec(int uk)
{
	if (uk == n-1)
		return ve[uk].S;
	if (dp[uk] == -1)
	{
		
	}
	return dp[uk];
}

int main()
{
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
	int n, mxr, mxa;
	cin >> n;
	fr(i, n)
	{
		int ag, rs;
		cin >> ag >> rs;
		ve.pb(mp(ag, rs));
		mxa = max(mxa, ag);
		mxr = max(mxr, rs);
	}
	sort(ve.begin(), ve.end());
	fr(i, n)
		dp[i] = -1;
	dp[n-1] = 
	cout << rec(0);
}