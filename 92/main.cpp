
#include <iostream>

using namespace std;

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int x;
	cin >> x;
	cout << x / 6 << " " << (x * 2) / 3 << " " << x / 6;
	return 0;
}