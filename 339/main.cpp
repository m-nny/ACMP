
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
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
	str i1, i2;
	cin >> i1 >> i2;
	int a, b, c, d, e, f;
	a = (int)(i1[0]-'0')*10+(int)(i1[1]-'0');
	b = (int)(i1[3]-'0')*10+(int)(i1[4]-'0');
	c = (int)(i1[6]-'0')*1000+(int)(i1[7]-'0')*100+(int)(i1[8]-'0')*10+(int)(i1[9]-'0');
	d = (int)(i2[0]-'0')*10+(int)(i2[1]-'0');
	e = (int)(i2[3]-'0')*10+(int)(i2[4]-'0');
	f = (int)(i2[6]-'0')*1000+(int)(i2[7]-'0')*100+(int)(i2[8]-'0')*10+(int)(i2[9]-'0');
	printf("%i %i %i\n%i %i %i", a, b, c, d, e, f);
	int res = 0;
	for(int i = c; i < f; i++)
	{
		if (((i%4==0)&&(i%100!=0))||(i%400==0))
			res++;
	}
}