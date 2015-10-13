
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
#define fbr(ii, bb, ee) for (int ii = bb; ii < ee; ii++)
#define frv(ii, ite, vv) for(vector<ite>::iterator ii = vv.begin(); ii != vv.end(); ii++)
#define frs(ii, ite, vv) for(set<ite>::iterator ii = vv.begin(); ii != vv.end(); ii++)
#define frq(ii, ite, vv) for(queue<ite>::iterator ii = vv.begin(); ii != vv.end(); ii++)

struct N
{
	int d[110];
	int sz;
};

N add(N in, int ad)
{
	N out;
	fr(i, in.sz)
	{
		out.d[i] = (in.d[i] + ad)%10;
		ad = (in.d[i] + ad)/10;
	}
	out.sz = in.sz;
	if (ad > 0)
		out.d[in.sz] = ad, out.sz++;
	return out;
}

int sq(N in)
{
	while (in.sz > 1)
	{
		N bu;
		bu.sz = 1;
		bu.d[0] = 0;
		fr(i, in.sz)
			bu = add(bu, in.d[i]);
		in = bu;
	}
	return in.d[0];
}
/*
int main()
{
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
	str in;
	cin >> in;
	N mas;
	mas.sz = in.size();
	int sz = mas.sz;
	fr(i, in.size())
		mas.d[i] = (int)(in[sz - i - 1]-'0');
	int aa;
	cin >> aa;
	N out = add(mas, aa);
	fr(i, out.sz)
		cout << out.d[out.sz - i-1];
}*/

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	str in;
	cin >> in;
	N mas;
	mas.sz = in.size();
	int sz = mas.sz;
	fr(i, in.size())
		mas.d[i] = (int)(in[sz - i - 1]-'0');
	for(int i = 1; i < sz; i++)
	{
		N a, b;
		fbr(j, 0, i)
			a.d[j] = mas.d[j];
		a.sz = i;
		fbr(j, 0, sz-i)
			b.d[j] = mas.d[j+i];
		b.sz = sz - i;
		int qa = sq(a);
		int qb = sq(b);
		if (qa == qb)
		{
			puts("YES");
			return 0;
		}
	}
	cout << "NO";
}