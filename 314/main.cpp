
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

int ch(int aa, int bb)
{
	int sa = aa, sb = bb;
	vector<int> a, b;
	while (aa > 0)
		a.pb(aa%10), aa/=10;
	while (bb > 0)
		b.pb(bb%10), bb/=10;
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	int uk = 0;
	int sza = a.size(), szb = b.size();
	if (a.size() < b.size())
		while (a.size() != b.size())
			a.pb(0);
	else
		while (a.size() != b.size())
			b.pb(0);
	while (a[uk]==b[uk] && uk < a.size())
		uk++;
	if (uk == a.size())
		return (sza > szb);
	return (a[uk] > b[uk]);
}

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n, k;
	cin >> n >> k;
	int mas[10010];
	fr(i, n)
		mas[i] = i+1;
	int cnt = 1;
	fr(i, n)
		if (mas[i] != k)
			if (!ch(mas[i], k))
				cnt++;
	cout << cnt;
//	cout << mas[k-1];*/
//	cout << ch(n, k) << '\n';
}