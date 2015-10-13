
#include <iostream>
#include <cstring>
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
#define R 1
#define G 2
#define B 3

int w, h;
bool m[8][4];

void fl()
{
	for (int i = 0; i < 8; i++)
		m[i][0] = 1;
	m[1][B] = 1;
	m[2][G] = 1;
	m[3][G] = 1;
	m[3][B] = 1;
	m[4][R] = 1;
	m[5][R] = 1;
	m[5][B] = 1;
	m[6][R] = 1;
	m[6][G] = 1;
	m[7][R] = 1;
	m[7][G] = 1;
	m[7][B] = 1;
}

int mas[110][110], sh[110][110];

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	char q;
	fl();
	cin >> w >> h;
	for (int i = 0; i < w; i++)
		for (int j = 0; j < h; j++)
		{
			cin >> q;
			if (q == 'R')
				mas[i][j] = R;
			if (q == 'G')
				mas[i][j] = G;
			if (q == 'B')
				mas[i][j] = B;
			if (q == '.')
				mas[i][j] = 0;
		}
	for (int i = 0; i < w; i++)
		for (int j = 0; j < h; j++)
			cin >> sh[i][j];
	for (int i = 0; i < w; i++)
	{
		for (int j = 0; j < h; j++)
		{
//			cerr << m[sh[i][j]][mas[i][j]] << " " << sh[i][j] << " " << mas[i][j] << '\n';
			if (!m[sh[i][j]][mas[i][j]])
			{
				cout << "NO";
				return 0;
			}
		}
//		puts("");
	}
	cout << "YES";
}