
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
#define INF (int)(1e6+7)
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
	int n;
	vector<bool> bo(INF, 0);
	cin >> n;
	int lb = 1, llb = 1;
	bo[2] = 1;
	bo[3] = 1;
	bo[4] = 1;
	bo[7] = 1;
	vector<int> av, bv;
	bv.pb(1);
	int i = 2;
	while (av.size() < n || bv.size() < n)
	{
		if (!bo[i])
		{
			if (lb == 1)
				bv.pb(i), llb = lb, lb = i;
			else
				bv.pb(i), bo[i+llb] = 1, llb = lb, lb = i;
		}
		else
			av.pb(i);
		i++;
	}/*
	puts("");
	fr(i, av.size())
		cout << av[i] << " ";
	puts("");
	fr(i, bv.size())
		cout << bv[i] << " ";
	puts("");*/
	cout << av[n-1] << "\n" << bv[n-1];
}