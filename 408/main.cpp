
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

int n, m;
string s, t;
char c = '+';
vector <string> v;

void f()
{
	while (s[0] == c)
		s = s.substr(1, s.size());
	while (s.back() == c)
		s.pop_back();
//	if (s.size() > m)
//	{
//		puts("Impossible.");
//		exit(0);
//	}
	int l = (m - s.size()) / 2;
	int r = (m - s.size() - l);
	printf("!%s!%d %d %d\n", s.c_str(), (int)s.size(), l, r);
	while (l)
		s = c + s, l--;
//	while (r--)
//		s.pb(c);
	v.pb(s);
}

int main()
{
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
	cin >> m >> n;
	getline(cin, s);
	for (int i = 1; i <= n; i++)
	{
		getline(cin, s);
		f();
	}
	for (int i = 0; i < n; i++)
		puts(v[i].c_str());
}

