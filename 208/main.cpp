
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

str is(int n)
{
	str out = "";
	while (n > 0)
	{
		out += (char)(n%2+'0');
		n /=2;
	}
	reverse(out.begin(), out.end());
	return out;
}

int si(str in)
{
	int out = 0;
	int k = 1;
	reverse(in.begin(), in.end());
	fr(i, in.size())
	{
		out += (int)(in[i] - '0') * k;
		k *= 2;
	}
	return out;
}

str sd(str in)
{
	str out = "";
	out+=in[in.size()-1];
	fbr(i, 0, in.size()-1)
		out+=in[i];
	return out;
}

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	str in;
	int n;
	cin >> n;
	if (n == 0)
	{
		cout << 0;
		return 0;
	}
	in = is(n);
	set<str> se;
	se.insert(in);
	str uk = in;
	str mx = "0";
	do
	{
		se.insert(uk);
		uk = sd(uk);
		if (uk > mx)
			mx = uk;
	}
	while (in != uk);
	cout << si(mx);
}