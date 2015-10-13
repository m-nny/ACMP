
#include <set>
#include <utility>
#include <iostream>
#include <cmath>

using namespace std;

pair <int, int> a, b, buf;
int q = 0;
set <pair <int, int> > se;

bool rec(short int x, short int y)
{
	buf = make_pair(x, y);
	if (se.find(buf) == se.end)
		se.insert(buf);
	else
		return false;
	cout<<x<<" "<<y<<"   ";
	if ((x < 0) || (y < 0))
	{
		cout<<1;
		q--;
		return false;
	}
	if ((x > 7) || (y > 7))
	{
		q--;
		return false;
	}
	if (q > 2)
	{
		cout<<3;
		q--;
		return false;
	}
	if ((y == b.second) && (x == b.first))
	{
		cout<<4;
		cout<<q;
		q--;
		return true;
	}
		q++;
		if	(rec (x + 2, y + 1))
			return true;
		else
		if	(rec (x + 1, y + 2))
			return true;
		else
		if	(rec (x - 2, y + 1))
			return true;
		else
		if	(rec (x - 1, y + 2))
			return true;
		else
		if	(rec (x - 2, y - 1))
			return true;
		else
		if	(rec (x - 1, y - 2))
			return true;
		else
		if	(rec (x + 2, y - 1))
			return true;
		else
		if	(rec (x + 1, y - 2))
			return true;
	return false;
}

int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt","w", stdout);
	string s;
	getline(cin, s);
	a = make_pair (s[0] - 'a', s[1] - '0');
	b = make_pair (s[4] - 'a', s[5] - '0');
	cout<<a.first<<" "<<a.second<<'\n';
	cout<<b.first<<" "<<b.second<<'\n';
	if (abs((a.first - b.fisrt) * (b.second - )))
	rec(a.first, a.second);
	return 0;
}