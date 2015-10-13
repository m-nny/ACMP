
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

bool best(int a, int b)
{
	int aa = a, bb = b;
	int s1 = 0, s2 = 0;
	while(aa > 0)
		s1+=aa%10, aa/=10;
	while(bb > 0)
		s2+=bb%10, bb/=10;
	if (s1 == s2)
		return (a < b);
	return (s1 > s2);
}

int mx(int a, int b)
{
//	cerr << a << " " << b << " ";
	if (best(a, b))
		return a;
	else
		return b;
}

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n, m = 1;
	cin >> n;
	for(int i = 1; i <= n; i++)
		if (n % i == 0)
			m = mx(m, i);
	cout << m;
}