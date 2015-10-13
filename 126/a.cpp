#include <bits/stdc++.h>

using namespace std;

int n, a[110][110], b = 4000, i, j;

int main()
{
	cin  >> n;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			cin >> a[i][j];
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			for (int k = 0; k < n; k++)
				if (k != i && k != j && i != j)
					b = min(b, a[i][j] + a[j][k] + a[k][i]);
	cout << b;
}
