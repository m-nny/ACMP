#include <bits/stdc++.h>

using namespace std;

char a[3], b[55], i;

int main()
{
	cin >> b;
	a[0] = 1;
	for (; i < strlen(b);)
	{
		if (b[i] == 'A')
			swap(a[0], a[1]);
		if (b[i] == 'B')
			swap(a[1], a[2]);
		if (b[i++] == 'C')
			swap(a[2], a[0]);
	}
	printf("%d", a[0] ? 1 : a[1] ? 2 : 3);
}
