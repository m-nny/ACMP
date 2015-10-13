
#include <bits/stdc++.h>

using namespace std;

#define F first
#define S second

pair <int, int> a[4], b[4];

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt","w", stdout);
	for (int i = 0; i < 3; i++)
	{
		scanf("%d%d", &a[i].F, &a[i].S);
		if (a[i].F > a[i].S)
			swap(a[i].F, a[i].S);
	}
	for (int i = 0; i < 3; i++)
	{
		scanf("%d%d", &b[i].F, &b[i].S);
		if (b[i].F > b[i].S)
			swap(b[i].F, b[i].S);
	}
	sort(b, b + 3);
	sort(a, a + 3);
	bool ok = 1;
	for (int i = 0; i < 3; i++)
		if (a[i] != b[i])
			ok = false;
	puts(ok ? "YES" : "NO");
} 