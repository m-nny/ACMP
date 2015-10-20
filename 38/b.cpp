
#include <bits/stdc++.h>

using namespace std;

int n, a[110], s[110], d[110][110][2], F, S;

int E(int l, int r, int s)
{
	if (l == r)
		return a[l] * s;
	int & A = d[l][r][s];
	if (A != -1)
		return A;
	int L = E(l, r - 1, !s) + a[r] * s,
	R = E(l + 1, r, !s) + a[l] * s;
	return A = s ? max(L, R) : min(L, R);
}

int main()
{
	memset(d, -1, sizeof(d));
	cin >> n;
	for (int i = 1; i <= n; i++)
		scanf("%d", a + i),
		s[i] += s[i - 1] + a[i];
	F = E(1, n, 1);
	S = s[n] - F;
	if (F == S)
		puts("0");
	else
		cout << 1 + (F < S);
}
