
#include <iostream>
#include <string>
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

bool tn(string a, string b)
{
	for (int i = 0; i < a.length(); i++)
		if (a[i] != b[i])
			return 0;
	return 1;
}

string sb(string in, int uk)
{
	string out = "";
	for (int i = uk; i < uk + 5; i++)
		out+=in[i];
	return out;
}

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	str in, a = ">>-->", b = "<--<<";
	getline(cin, in);
	int sz = in.size();
	int cnt = 0;
	for (int i = 0; i < sz - 4; i++)
	{
		if (tn(sb(in, i), a) || tn(sb(in, i), b))
			cnt++;
	}
	cout << cnt;
}