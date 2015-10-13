
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

#define er {cout << "ERROR"; return 0;}
bool ch (char a)
{
	return ((a < 0) || (a > 8));
}

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt","w", stdout);
	char a, b, t, x, y;
	scanf("%c%c%c%c%c",&a,&b,&t,&x,&y);
	a -= 64;
	b -= 48;
	x -= 64;
	y -= 48;
	if (t != '-')
		er;
	if ((ch(a) || ch(b)) || (ch(x) || ch(y)))
		er;
	if (abs(a - x) * abs(b - y) == 2)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}