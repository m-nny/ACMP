
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

int mas[32010];
int maxn = -1;

int evk(int a, int b)
{
	if (a == 0 || b == 0)
		return a+b;
	if (a > b)
		return evk(b, a%b);
	else
		return evk(a, a%b);
}

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n, x;
	cin >> n;
	fr(i, n)
	{
		cin >> x;
		mas[x]++;
		maxn = max(maxn, x);
	}
	int gcd = mas[x]-1;
	fr(i, maxn)
	{
		if (mas[i] != 0)
		{
			gcd = evk(gcd, mas[i]);
//			cout << gcd << " " << mas[i] << " " << i << " " << '\n';
		}
	}
	cout << (n-1)/(gcd);
	/*
	puts("");
	cout << maxn << '\n';
	fr(i, 32010)
		if (mas[i] != 0)
			cout << i << " " << mas[i] << '\n';*/
}