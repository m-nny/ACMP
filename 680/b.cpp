
#include <bits/stdc++.h>

using namespace std;

int dp[3][55], n;

int main()
{
	scanf("%d", &n);
	dp[0][1] = dp[1][1] = dp[2][1] = 1;
	for (int i = 2; i <= n; i++)
	{
		dp[0][i] = dp[1][i - 1] + dp[2][i - 1];
		dp[1][i] = dp[0][i - 1] + dp[2][i - 1];
		dp[2][i] = dp[0][i - 1] + dp[1][i - 1];
	}
	printf("%d", dp[0][n] + dp[1][n] + dp[2][n]);
}