
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

int a, b, c, d;

int main()
{
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
	str ln, name;
	getline(cin, ln);
	int cnt = 0, uk = -1;
	fr(i, ln.length())
		if (ln[i] == 34)
			cnt++, uk = i;
//	cout << uk;
	name = ln.substr(0, uk +1);
	ln = ln.substr(uk+2, ln.length() - uk - 2);
	cout << name << "\n" << ln << '\n';
	a = (int)(ln[0] - '0') * 10 + (int)(ln[1] - '0');
	b = (int)(ln[3] - '0') * 10 + (int)(ln[4] - '0');
	c = (int)(ln[6] - '0') * 10 + (int)(ln[7] - '0');
	d = (int)(ln[9] - '0') * 10 + (int)(ln[10] - '0');
//	printf("%i %i %i %i", a, b, c, d);
}