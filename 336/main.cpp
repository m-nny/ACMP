
#include <iostream>
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

char c;
int uk = 110;
bool us[250];

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	us[uk] = 1;
	while(cin >> c)
	{
		if (c == '1')
			uk ++;
		if (c == '2')
			uk--;
		us[uk] = 1;
	}
	int cnt = 0;
	for (int i = 0; i < 250; i++)
		if (us[i])
			cnt++;
	cout << cnt;
}