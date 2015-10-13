
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define INF (int)(1e9+7)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define fr(ii, ee) for (int ii = 0; ii < ee; ii++)

struct stt
{
    string name;

};

map <string, int> dic;
vecetor<stt> st;

int main()
{
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int n;
	cin >> n;
	fr(i, n)
	{
		str in;
		int x, y, r;
		cin >> in >> x >> y >> r;
		dic[in].pb( mp(mp(x, y), r) );
		if (pos.find(in)==pos.end())
			pos[in] = i;
	}
	vector < pair <str, int> > ans(dic.size());
	int xx, yy;
	cin >> xx >> yy;
	for(map<str, vector < pair < pair <int, int>, int > > > ::iterator it = dic.begin(); it != dic.end(); it++)
	{
		int cnt = 0;
		fr(i, (*it).S.size())
		{
			pair < pair <int, int>, int > now = (*it).S[i];
			int x = now.F.F, y = now.F.S, r = now.S;
			ll S = (x-+0ll+xx)*(x-xx)+(y-yy)*(y-yy+0ll);
			cout << x << " " << y << " " << r << " " << S << '\n';
			if (sqrt(S+.0) <= (r+.0))
				cnt++;
		}
		ans[pos[(*it).F]] = (mp((*it).F, cnt));
	}
	cout << ans.size() << '\n';
	fr(i, ans.size())
		cout << ans[i].F << " " << ans[i].S << '\n';
}
