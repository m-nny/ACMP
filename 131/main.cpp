
#include <iostream>

using namespace std;

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt","w", stdout);
	int n, m = -1, q, uk = -1;
	bool x;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> q >> x;
		if (x)
			if (m < q)
				m = q, uk = i;
	}
	cout << uk;
	return 0;
}