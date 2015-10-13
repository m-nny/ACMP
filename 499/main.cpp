
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

int k, w;
int a[3], b[3];
int cnt, we;

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	cin >> k >> w;
	for (int i = 0; i < 3; i++)
		cin >> a[i] >> b[i];
	
	for (int mask = 0; mask < (1 << 3); mask++)
	{
		cnt = 0;
		we = 0;
		for (int i = 0; i < 3; i++)
		{
			if (mask & (1 << i))
			{
				cnt += b[i];
				we += a[i];
			}
		}
		if (cnt >= k && we <= w)
		{
			puts("YES");
			return 0;
		}
	}
	puts("NO");
}