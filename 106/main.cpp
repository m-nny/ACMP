#include <iostream>

using namespace std;

int n, x, a, b;

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt","w", stdout);
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		if (x)
			a++;
		else 
			b++;
	}
	cout << min(a, b);
	return 0;
}