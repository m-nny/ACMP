
#include <bits/stdc++.h>

double d, p;

int n, i = 2;

int main()
{
	std::cin >> n >> p;
	d = p;
	while (i++ <= n)
	{
		std::cin >> p;
		d = d * p + (1 - d) * (1 - p);
	}
	printf("%.9f", d);
}
