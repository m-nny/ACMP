
#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int n, cnt;
char s[2000];

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%s", s);
		if (s[0] == s[3])
			cnt++;
	}
	printf("%d", cnt);
}