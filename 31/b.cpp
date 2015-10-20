
#include <bits/stdc++.h>

int n, k, a[10], A, C, i;

int main()
{
	std::cin >> n >> k;
	for (i = 0; i < n; i++)
		a[i] = i;
	do
	{
		C = 0;
		for (i = 0; i < n; i++)
			C += a[i] == i;
		A += C == k;
	} while (std::next_permutation(a, a + n));
	std::cout << A;
}
