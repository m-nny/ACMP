
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

vector<pair<pair<int, int>, pair<int,int> > > ve;
int D, M, h, m;
str in;

void arr()
{
	D = (int)(in[0] - '0')*10 + (int)(in[1] - '0');
	M = (int)(in[3] - '0')*10 + (int)(in[4] - '0');
	h = (int)(in[7] - '0')*10 + (int)(in[8] - '0');
	m = (int)(in[10] - '0')*10 + (int)(in[11] - '0');
}

int main()
{
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
	int k;
	cin >> k;
	getline(cin, in);
	fr(i, k)
	{
		getline(cin, in);
		arr();
		ve.pb(mp(mp(M, D),mp(h, m)));
	}
	sort(ve.begin(), ve.end());
	int cnt = 0;
	for(int i = 0; i < k; i+=2)
	{
		int M1, D1, h1, m1, M2, D2, h2, m2;
		M1 = ve[i].F.F;
		D1 = ve[i].F.S;
		h1 = ve[i].S.F;
		m1 = ve[i].S.S;
		M2 = ve[i+1].F.F;
		D2 = ve[i+1].F.S;
		h2 = ve[i+1].S.F;
		m2 = ve[i+1].S.S;
		printf("%i.%i. %i:%i\n", D1, M1, h1, m1);
		printf("%i.%i. %i:%i\n", D2, M2, h2, m2);
		if (M1 == M2 && D1 == D2)
			cnt+= (m2 + h2*60)-(m1+h1*60);
		else
		{
			int ct = 0;
			ct += (18*60)-(m1+h1*60);
			ct += (M2 - M1+1)*((D2 - D1)-1)*(8*60);
			ct += (m2+h2*60)-(10*60);
			printf("%i %i %i  %i", (18*60)-(m1+h1*60), (M2 - M1+1)*((D2 - D1)-1)*(8*60), );
			cnt += ct;
		}
		puts("\n");
	}
	cout << cnt/60 << " " << cnt%60;
}