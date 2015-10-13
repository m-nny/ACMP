
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

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	ll a, b, c;
//	scanf("%li:%li:%li", &a, &b, &c);
	str inn;
	cin >> inn;
	a = (ll)(inn[0]-'0')*10+(ll)(inn[1]-'0');
	b = (ll)(inn[3]-'0')*10+(ll)(inn[4]-'0');
	c = (ll)(inn[6]-'0')*10+(ll)(inn[7]-'0');
	str in;
	ll d = 0, e = 0, f = 0;
	cin >> in;
	ll uk = in.size()-1;
	ll ff = 0, ee = 0, dd = 0;
	while ((uk >= 0) && (in[uk] !=':'))
	{
		ff = ff * 10 + (ll)(in[uk] - '0');
		uk--;
	}
	while (ff > 0)
		f = f * 10 + ff%10, ff/=10;
	uk--;
	while ((uk >= 0) && (in[uk] != ':'))
	{
		ee = ee*10+(ll)(in[uk]-'0');
		uk--;
	}
	while (ee > 0)
		e = e * 10 + ee%10, ee/=10;
	uk--;
	while ((uk >= 0) && (in[uk] != ':'))
	{
		dd = dd*10+(ll)(in[uk]-'0');
		uk--;
	}
	while (dd > 0)
		d = d * 10 + dd%10, dd/=10;
	c += b * 60 + a * 60 * 60;
	ll r = f + e * 60 + d * 60 * 60;
	ll rc = c + r, rb = (rc/60), ra = rb/60;
	if (ra%24 < 10)
		cout << 0;
	cout << ra%24 << ":";
	if (rb%60 < 10)
		cout << 0;
	cout << rb%60 << ":";
	if (rc%60 < 10)
		cout<< 0;
	cout << rc%60;
	ll rr = 0;
	cerr << ra << " ";
	while (ra>24)
	{
		ra-=24;
		rr++;
	}
	cerr << rr;
	if (rr > 0)
		cout << "+" << rr << " days";

}