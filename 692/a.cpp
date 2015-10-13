
#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

long long n;
long long a = 1;

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	scanf("%I64d", &n);
	if (n < 1)
	{
		puts("NO");
		return 0;
	}
	for (int i = 0; i <= 32; i++)
	{
		if ((1<<i) == n)
		{
			puts("YES");
			return 0;
		}
	}
	puts("NO");
}