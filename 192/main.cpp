
#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

int n, a[13], us[13];
long long f[13];

void rec(int i, int k)
{
	if (i == n)
	{
		for (int j = 0; j < n; j++)
			cout << a[j] << " ";
		return;
	}
	int j = (k + f[n - i - 1] - 1) / f[n  - i - 1], b = 0;
	for (int q = 1; q <= n; q++)
	{
		if (!us[q])
			b++;
		if (b == j)
		{
			b = q;
			break;
		}
	}
	a[i] = b;
	us[b] = 1;
	rec(i + 1, k - f[n - i - 1] * (j - 1));
}

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int k;
	cin >> n >> k;
	f[0] = 1ll;
	for (int i = 1; i < 13; i++)
		f[i] = f[i - 1] * i;
	rec(0, k);
}