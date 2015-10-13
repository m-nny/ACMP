
#include <iostream>

using namespace std;

int x, y;

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt","w", stdout);
	cin >> x >> y;
	while ((x > 0) && (y > 0))
	{
		if (x > y)
			x %= y;
		else
			y %= x;
	}
	cout << x + y;
	return 0;
}