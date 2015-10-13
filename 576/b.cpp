#include <bits/stdc++.h>

int n, c, i;

int main()
{
	std::cin >> n;
	for (i = n - 1; i; i--)
		c += std::__gcd(n, i) == 1;
	std::cout << c;
}
