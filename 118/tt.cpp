
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

int n, k, cnt = 1, u = 0;
bool us[500];

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	cin >> n >> k;
	for (int q = 1; q < n; q++)
	{
		cnt = 0;
		int lt = 0;
		for (int j = 0; j < (n - lt); j++)
		{
			if (!us[(j+u)%(n-lt)])
				cnt++;
			if (cnt == k)
			{
//				cout << (j+u)%(n-lt)+1<< "\n";
				us[(j+u)%(n-lt)] = 1;
				u = (j+u)%(n-lt) + 1;
				break;
			}
		}
/*		for (int i = 0; i < n; i++)
			cout << us[i] << " ";
		puts("\n");*/
	}
	for (int i = 0; i < n; i++)
		if (!us[i])
		{
			cout << i + 1;
			break;
		}
}