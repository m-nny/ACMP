
#include <bits/stdc++.h>

using namespace std;

int n, m, a, d;

int main()
{
	cin >> n >> m;
	if (n < m || !n || !m || m == 1)
	{
		printf("%d", (n < m) ? 0 : (!n | !m ? 1 : n));
		exit(0);
	}
	for (; d <= n;)
		a += max(0, n + d - m * (d++ + 1) + 1);
	cout << a;
}

