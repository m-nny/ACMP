
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int n, x;

bool f (int s)
{
	int x = 0, y = 0;
	for (int i = 0; i < 3; i++)
		y += s % 10, s /= 10;
	for (int i = 0; i < 3; i++)
		x += s % 10, s /= 10;
	return (x == y);
}

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt","w", stdout);
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		if  (f(x - 1) || f(x + 1))
			cout << "Yes";
		else
			cout << "No";
		puts("");
	}
	return 0;
}