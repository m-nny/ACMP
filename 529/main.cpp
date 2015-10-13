
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int x1, x2, y1, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	double res = abs((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
	cout << setprecision(11) << sqrt(res);
	return 0;
}