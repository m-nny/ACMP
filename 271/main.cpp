
#include <iostream>
#include <cstring>
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
#define mk make_pair
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
	ll i, f1 = 1, f2 = 1, uk = 2;
	cin >> i;
	while (i > f2)
	{
		ll q = f1 + f2;
//		printf("%li %li %li\n", f1, f2, q);
		f1 = f2;
		f2 = q;
		uk++;
	}
	cout << (i == f2);
	if (i == f2)
	{
		cout <<'\n' << uk;
	}
}