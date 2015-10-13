
#include <string>
#include <iostream>
#include <cmath>

using namespace std;

int ax, ay, bx, by;

bool rec(int x, int y)
{
	if	((x + 2 == bx) && (y + 1 == by))
		return true;
	else
	if	((x - 2 == bx) && (y + 1 == by))
		return true;
	else
	if	((x + 2 == bx) && (y - 1 == by))
		return true;
	else
	if	((x - 2 == bx) && (y - 1 == by))
		return true;
	else
	if	((x + 1 == bx) && (y + 2 == by))
		return true;
	else
	if	((x + 1 == bx) && (y - 2 == by))
		return true;
	else
	if	((x - 1 == bx) && (y + 2 == by))
		return true;
	else
	if	((x - 1 == bx) && (y - 2 == by))
		return true;
	return false;
}

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt","w", stdout);
	string s;
	getline(cin, s);
	ax =(int) s[0] - 'a';
	ay =(int) s[1] - '0';
	bx =(int) s[4] - 'a';
	by =(int) s[5] - '0';
	if (abs((ax - bx) * (ay - by)) == 2)
	{
		cout<<1;
		return 0;
	}
	int x = ax, y = ay;
	if	(rec (x + 2, y + 1))
		cout<<2;
	else
	if	(rec (x + 1, y + 2))
		cout<<2;
	else
	if	(rec (x - 2, y + 1))
		cout<<2;
	else
	if	(rec (x - 1, y + 2))
		cout<<2;
	else
	if	(rec (x - 2, y - 1))
		cout<<2;
	else
	if	(rec (x - 1, y - 2))
		cout<<2;
	else
	if	(rec (x + 2, y - 1))
		cout<<2;
	else
	if	(rec (x + 1, y - 2))
		cout<<2;
	else
		cout<<"NO";
	return 0;
}