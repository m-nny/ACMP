
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
#define uni unsigned int
#define fr(ii, ee) for (int ii = 0; ii < ee; ii++)
#define frv(ii, ite, vv) for(vector<ite>::iterator ii = vv.begin(); ii != vv.end(); ii++)
#define frs(ii, ite, vv) for(set<ite>::iterator ii = vv.begin(); ii != vv.end(); ii++)
#define frq(ii, ite, vv) for(queue<ite>::iterator ii = vv.begin(); ii != vv.end(); ii++)

uni ch(str in)
{
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
	return rrr;
}

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n, m;
	vector<uni> dic, ma;
	cin >> n;
	fr(i, n)
	{
		str x;
		cin >> x;
		dic.pb(ch(x));
	}
	cin >> m;
	fr(i, m)
	{
		str a, b;
		cin >> a >> b;
		uni aa = ch(a), bb = ch(b), cnt = 0;
		fr(i, n)
			if ((aa & dic[i])==(bb & dic[i]))
				cnt++;
		cout << cnt << '\n';
	}
}