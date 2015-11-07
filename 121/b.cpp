
#include <bits/stdc++.h>

using namespace std;

int n;
long long dp[100 * 1000 + 1], a[100 * 1000 + 1];

int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	sort(a + 1, a + n + 1);
	dp[0] = dp[1] = (long long)1e18 + 7;
	dp[2] = a[2] - a[1];
	for (int i = 3; i <= n; i++)
		dp[i] = min(dp[i - 1] + a[i] - a[i - 1], dp[i - 2] + a[i] - a[i - 1]);
	cout << dp[n];
}
