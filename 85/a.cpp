
#include <iostream>
#include <cmath>
#include <cstdio>
#include <algorithm>

using namespace std;

int a, b;

int __gcd(int a, int b)
{
	while (b)
	{
		a %= b;
		swap(a, b);
	}
	return a;
}

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	scanf("%d%d", &a, &b);
	int g = __gcd(a, b);
	for (int i = 0; i < g; i++)
		putchar('1');
}