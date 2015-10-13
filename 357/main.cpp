
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

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int a = 0, b = 0;
	str in;
	getline(cin, in);
	for (int i = 0; i < in.length(); i++)
	{
		if (i % 2 == 0)
			a+=(int)(in[i]-'0');
		else
			b+=(int)(in[i]-'0');
//		cout << a << " " << b << " " << (int)(in[i] -'0') << '\n';
		a%=11;
		b%=11;
	}
//	cout << a << " " << b << '\n';
	if (abs(a - b)%11 == 0)
		cout << "YES";
	else
		cout << "NO";
}