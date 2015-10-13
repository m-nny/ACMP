
#include <bits/stdc++.h>

typedef long long ll;

std::map <ll, ll> f;

ll rec(ll x)
{
	return x < 4 ? x == 3 : (f.count(x) ? f[x] : f[x] = rec(x / 2) + rec((x + 1) / 2));
}

int main()
{
	ll n;
	std::cin >> n;
	std::cout << rec(n);
}
