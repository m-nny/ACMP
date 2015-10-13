
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

str tr(int q, int k)
{
	str out = "";
	while (q > 0)
	{
		int b = q%k;
		if (b > 9)
			out+=(char)(b+'a'-10);
		else
			out+=(char)(b%10+'0');
		q/=k;
	}
	reverse(out.begin(), out.end());
	return out;
}

bool ch(str in)
{
	int us[40];
	fr(i, 40)
		us[i] = 0;
	fr(i, in.size())
	{
		if (in[i] > '9')
			us[(int)(in[i]-'a'+10)]++;
		else
			us[(int)(in[i]-'0')]++;
	}
	fr(i, 40)
		if (us[i] > 1)
			return 0;
	return 1;
}

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n;
	cin >> n;
	for(int i = 2; i < 37; i++)
	{
		str o = tr(n, i);
//		cout << o << " " << ch(o) << '\n';
		if (ch(o))
			cout << i << " ";
	}
}