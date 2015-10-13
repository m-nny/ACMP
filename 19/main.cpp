
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
#define bl(xy, yx) ((0 <=xy && xy <= 7) && (0 <= yx && yx <= 7))

int us[8][8];

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	char c1, c2, c3;
	int y1, y2, y3;
	scanf("%c%i %c%i %c%i", &c1, &y1, &c2, &y2, &c3, &y3);
	int x1 = (int)(c1-'A'+1), x2 = (int)(c2-'A'+1), x3 = (int)(c3-'A'+1);
	swap(x1, y1), swap(x2, y2), swap(x3, y3);
	fr(i, 8)
		us[i][y1-1] = 1;
	fr(i, 8)
		us[x1-1][i] = 1;
	fr(i, 8)
		us[i][y2-1] = 1;
	fr(i, 8)
		us[x2-1][i] = 1;
	for(int x = x1-1, y = y1-1; x < 8 && y < 8; x++, y++)
		us[x][y] = 1;
	for(int x = x1-1, y = y1-1; x < 8 && y >= 0; x++, y--)
		us[x][y] = 1;
	for(int x = x1-1, y = y1-1; x >= 0 && y >= 0; x--, y--)
		us[x][y] = 1;
	for(int x = x1-1, y = y1-1; x >= 0 && y < 8; x--, y++)
		us[x][y] = 1;
	x3--, y3--;
	if (bl(x3-1, y3-2))
		us[x3-1][y3-2] = 1;

	if (bl(x3-2, y3+1))
		us[x3-2][y3+1] = 1;

	if (bl(x3+1, y3+2))
		us[x3+1][y3+2] = 1;

	if (bl(x3+2, y3+1))
		us[x3+2][y3+1] = 1;

	if (bl(x3-1, y3+2))
		us[x3-1][y3+2] = 1;

	if (bl(x3-2, y3-1))
		us[x3-2][y3-1] = 1;

	if (bl(x3+1, y3-2))
		us[x3+1][y3-2] = 1;
	if (bl(x3+2, y3-1))
		us[x3+2][y3-1] = 1;

	us[x3][y3] = 4;
	us[x2-1][y2-1] = 3;
	us[x1-1][y1-1] = 2;
	int cnt = 0;
	fr(i, 8)
	{
		fr(j, 8)
		{
//			cout << us[7-i][j];
			if (us[7-i][j] == 1)
				cnt++;
		}
//		puts("");
	}
	cout << cnt;
}