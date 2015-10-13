
#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

int n, k, a[13];
long long ff[13];

long long f(int x)
{
	if (ff[x])
		return ff[x];
	return ff[x] = f(x - 1) * x;
}

int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	cin >> n >> k;
	ff[0] = 1, ff[1] = 1;
	a[0] = (k + f(n - 1) - 1) / (f(n - 1)) - 1;
	for (int i = 1; i < n; i++)
		if (i == a[0])
		{
			a[i] = 0;
		}
		else
			a[i] = i;
	sort(a + 1, a + n);
	for (int i = 0; i < n; i++)
		cout << a[i] + 1 << " ";
	puts("");
	k--;
	while (k--)
	{
		next_permutation(a + 1, a + n);
	}
	for (int i = 0; i < n; i++)
		cout << a[i] + 1 << " ";
}