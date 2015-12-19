
#include <bits/stdc++.h>

int n, m;
int ans, mask;

int main()
{
	std::cin >> n >> m;
	while(mask < (1 << n))
		ans += __builtin_popcount(mask++) >= m;
	std::cout << ans;
}
