#include <iostream>

using namespace std;

int n, x, y, res;

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt","w", stdout);
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> x >> y;
		res = 19 * y + (x + 239)*(x + 366) /2;
		cout << res << '\n';
	}
	return 0;
}