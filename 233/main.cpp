#include <iostream>
#define st string

using namespace std;

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt","w", stdout);
	int n, x;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		if (x <= 437)
		{
			cout << "Crash " << i + 1;
			return 0;
		}
	}
	cout << "No crash";
	return 0;
} 