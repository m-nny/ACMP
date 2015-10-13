
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
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	str a;
	int b;
	cin >> a >> b;
	reverse(a.begin(), a.end());
	int sz = a.size();
	int bb = -1;
	fr (i, sz)
	{
		int bd = (int)(a[i] - '0'), bl = (int)(a[i] - 'A' + 10);
		if ((0 <= bd) && (bd <= 9))
			bb = max(bb, bd);
		else
			if ((10 <= bl) && (bl <= 35))
				bb = max(bb, bl);
	}
	for (int i = bb; i <= 36; i++)
	{
		ll aa = 0, st = 1;
		bool fl = 0;
		fr (j, sz)
		{
			int bd = (int)(a[j] - '0'), bl = (int)(a[j] - 'A' + 10);
			if ((0 <= bd)&&(bd <= 9))
			{
				if (bd >= i)
				{
					fl = 1;
					break;
				}
				aa += st * bd, st *= i;
			}
			else
			if ((10 <= bl)&&(bl <= 35))
			{
/*				if (bl >= i)
				{
					cout << 0;
					return 0;
				}*/
				aa += st * bl, st *= i;
			}
			else
			{
				fl = 1;
				break;
			}
		}
//		printf("%i %i %i %i\n", aa, b, i, fl);
		if ((!fl) && (aa == b))
		{
			cout << i;
			return 0;
		}
	}
	cout << 0;
}