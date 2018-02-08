
#include <bits/stdc++.h>

using namespace std;

int rec(int n)
{
	if (n == 2)
		return 0;
	if (n % 2 == 0)
		return rec(n / 2) + 1;
	else
		return rec(3 * n + 1) + 1;
}

int main()
{
	int p, k;
	int cnt = 0;
	cin >> p >> k;
	for (int i = p; i <= k; i++)
		cnt += rec(i);
	cout << cnt;
}
