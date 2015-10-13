
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
#define fbr(ii, bb, ee) for (int ii = bb; ii < ee; ii++)
#define frv(ii, ite, vv) for(vector<ite>::iterator ii = vv.begin(); ii != vv.end(); ii++)
#define frs(ii, ite, vv) for(set<ite>::iterator ii = vv.begin(); ii != vv.end(); ii++)
#define frq(ii, ite, vv) for(queue<ite>::iterator ii = vv.begin(); ii != vv.end(); ii++)

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n, mas[110];
	int aa, bb, cc;
	double m = -1.0;
	cin >> n;
	fr(i, n)
		cin >> mas[i];
	fbr(a, 0, n)
		fbr(b, a+1, n)
			fbr(c, b+1, n)
			{
				double p, S, s;
				p = (mas[a]+mas[b]+mas[c])/2.0;
				S = p*(p-mas[a])*(p-mas[b])*(p-mas[c]);
				if (S <= 0)
					continue;
				s = sqrt(S);
				if (m < s)
					m = s, aa = a, bb = b, cc = c;
//				printf("%.7f %f %f", s, S, p);
			}
	if (m != -1.0)
		printf("%.16f\n%i %i %i", m, aa+1, bb+1, cc+1);
	else
		puts("-1");
}