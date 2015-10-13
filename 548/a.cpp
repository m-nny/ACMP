
#include <cstdio>
#include <algorithm>
#include <cstring>

using namespace std;

char a[300], b[300], c[600];

void swap()
{
	int n = strlen(a);
	int m = strlen(b);
	for (int i = 0; i < max(n, m); i++)
	{
		char tmp = a[i];
		a[i] = b[i];
		b[i] = tmp;
	}
}

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	scanf("%s\n%s", a, b);
	if (a > b)
		swap();
	merge(a, a + strlen(a), b, b + strlen(b), c);
	printf("%s", c);
}
