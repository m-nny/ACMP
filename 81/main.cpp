#include <iostream>
#define st string

using namespace std;

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt","w", stdout);
	int n, x, mi = 30001, ma = -1;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		mi = min(mi, x);
		ma = max(ma, x);
	}
	cout << mi << " " << ma;
	return 0;
} 