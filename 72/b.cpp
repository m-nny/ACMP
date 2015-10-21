
#include <bits/stdc++.h>

char s[90];

int main()
{
	gets(s);
	std::next_permutation(s, s + strlen(s));
	puts(s);
}
