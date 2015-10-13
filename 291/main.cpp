
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

int mas[1010][27], n;
int dc[27], cnt = 0;

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	cin >> n;
	fr(i, n)
	{
		str in;
		cin >> in;
		fr(j, in.size())
			mas[i][((int)(in[j]-'a'))]++;
	}
	str in;
	cin >> in;
	fr(i, in.size())
		dc[(int)(in[i]-'a')]++;
	fr(i, n)
	{
		bool fl = 1;
		fr(j, 26)
			if (dc[j] < mas[i][j])
			{
				fl = 0;
				break;
			}
		cnt+=(fl);
	}
	cout << cnt;
}