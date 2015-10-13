
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
#define mk make_pair
#define F first
#define S second
#define fr(ii, ee) for (int ii = 0; ii < ee; ii++)
#define frv(ii, ite, vv) for(vector<ite>::iterator ii = vv.begin(); ii != vv.end(); ii++)
#define frs(ii, ite, vv) for(set<ite>::iterator ii = vv.begin(); ii != vv.end(); ii++)
#define frq(ii, ite, vv) for(queue<ite>::iterator ii = vv.begin(); ii != vv.end(); ii++)

str st(str in)
{
	char m[4];
	for (int i = 0; i < 4; i++)
		m[i] = in[i];
	sort(m, m+4);
	str out = "";
	for (int i = 0; i < 4; i++)
		out += m[i];
	return out;
}

str rm(str a, str b)
{
	str out = "";
	int bu = 0;
	for (int i = 3; i >= 0; i--)
	{
//		cout << b[i] << " " << a[i]  << " " << b << " " << out << '\n';
		out += (char)((b[i] - a[i] -bu + 10)%10 + '0');
		if (b[i] - a[i] - bu < 0)
			bu = 1;
		else
			bu = 0;
	}
	reverse(out.begin(), out.end());
	return out;
}

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	str x, pr = "", a, b;
	int cnt = 0;
	cin >> x;
	while (x != pr)
	{
		pr = x;
		a = st(x);
		b = a;
		reverse(b.begin(), b.end());
		x = rm(a, b);
//		cout << a << " " << b << " " << x;
		cnt++;
	}
	cnt--;
	cout << x << '\n' << cnt;
}