
#include <bits/stdc++.h>

int n;
char s[9];

int main()
{
	std::cin >> s;
	n = strlen(s);
	std::sort(s, s + n);
	do
	{
		puts(s);
	} while (std::next_permutation(s, s + n));
}
