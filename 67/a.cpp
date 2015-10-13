
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

unsigned int ch(str in)
{
	str bo="", res = "";
	int a = 0, b = 0, c = 0, d = 0;
	int uk = 0;
	while (uk < in.size() && in[uk]!='.')
		a = a * 10 +(int)(in[uk] - '0'), uk++;
	uk++;
	while (uk < in.size() && in[uk]!='.')
		b = b * 10 +(int)(in[uk] - '0'), uk++;
	uk++;
	while (uk < in.size() && in[uk]!='.')
		c = c * 10 +(int)(in[uk] - '0'), uk++;
	uk++;
	while (uk < in.size() && in[uk]!='.')
		d = d * 10 +(int)(in[uk] - '0'), uk++;
	unsigned int rrr = d + c * 256 + b * 256*256 + a * 256*256*256;
	int aa = 8, bb = 8, cc = 8, dd = 8;
	while (a > 0)
		bo=(char)((a % 2) + '0') + bo, a /= 2, aa--;
	fr(i, aa)
		bo = '0' + bo;
	res += bo, bo = "";
	while (b > 0)
		bo=(char)((b % 2) + '0') + bo, b /= 2, bb--;
	fr(i, bb)
		bo = '0' + bo;
	res += bo, bo = "";

	while (c > 0)
		bo=(char)((c % 2) + '0') + bo, c /= 2, cc--;
	fr(i, cc)
		bo = '0' + bo;
	res += bo, bo = "";

	while (d > 0)
		bo=(char)((d % 2) + '0') + bo, d /= 2, dd--;
	fr(i, dd)
		bo = '0' + bo;
	res += bo, bo = "";
	unsigned int rr = 0;
	cout << rrr << '\n';
	fr(ii, res.size())
		rr = rr* 2 + (int)(res[ii]-'0');
	return rr;
}

int main()
{
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
	str in;
	cin >> in;
	unsigned int i = ch(in);
	cout << '\n' << i;
}