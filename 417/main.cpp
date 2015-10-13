
#include <iostream>
#include <fstream>
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

int d = 1, dd = 1, m = 1, y = 2008;
//ofstream oot("o.txt");
/*
void ctt(bool fl)
{
	if (fl)
	{
	}
	else
	{/*
	if (d == 0)
		oot << "Monday, ";
	if (d == 1)
		oot << "Tuesday, ";
	if (d == 2)
		oot << "Wednesday, ";
	if (d == 3)
		oot << "Thursday, ";
	if (d == 4)
		oot << "Friday, ";
	if (d == 5)
		oot << "Saturday, ";
	if (d == 6)
		oot << "Sunday, ";
	if (dd < 10)
		oot<< 0;
	oot<< dd << ".";
	if (m < 10)
		oot<< 0;
	oot<< m << '\n';
	}
}
*/
int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n;
	cin >> n;
	fr(i, n)
	{
		dd++;
		int qq = y;
		if (qq % 100==0)
			qq /= 100;
		if ((qq % 4 == 0) && (dd == 30) && (m == 2))
			dd = 1, m++;
		else
		if ((qq % 4 != 0) && (dd == 29) && (m == 2))
			dd = 1, m++;
		else
		if ((dd == 32) && ((m == 1) || (m == 3) || (m == 5) || (m == 7) || (m == 8) || (m == 10) || (m == 12)))
			dd = 1, m++;
		else
		if ((dd == 31) && ((m == 4) || (m == 6) || (m == 9) || (m == 11)))
			dd = 1, m++;
		if (m == 13)
			m = 1, y++, d = 1;
//		ctt(0);
	}
	d = (n+1)%7 + 1;
	if (d == 1)
		cout << "Monday, ";
	if (d == 2)
		cout << "Tuesday, ";
	if (d == 3)
		cout << "Wednesday, ";
	if (d == 4)
		cout << "Thursday, ";
	if (d == 5)
		cout << "Friday, ";
	if (d == 6)
		cout << "Saturday, ";
	if (d == 7)
		cout << "Sunday, ";
	if (dd < 10)
		cout << 0;
	cout << dd << ".";
	if (m < 10)
		cout << 0;
	cout << m;
}