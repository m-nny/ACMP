
#include <bits/stdc++.h>

using namespace std;

int const inf = int(1e9) + 7;
int n, m;
int a[150][150], pr[150][150], dp[150][150];
int path[150];

int rec(int i, int j)
{
    if (j == 1)
        return a[i][j];
    int & ans = dp[i][j];
    if (ans != -1)
        return ans;
    ans = inf;
    for (int x = max(1, i - 1); x <= min(i + 1, n); x++)
    {
        int cur = rec(x, j - 1) + a[i][j];
        if (cur < ans)
        {
            pr[i][j] = x;
            ans = cur;
        }
    }
    return ans;
}

int main()
{
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            scanf("%d", &a[i][j]);
    memset(dp, -1, sizeof(dp));
    int ans = inf, pos = -1;
    for (int i = 1; i <= n; i++)
    {
        int cur = rec(i, m);
        if (cur < ans)
        {
            ans = cur;
            pos = i;
        }
    } 
    int sum = 0;
    for (int j = m; j > 0; j--)
    {
        sum += a[pos][j];
        path[j] = pos;
        pos = pr[pos][j];
    }
    for (int j = 1; j <= m; j++)
        printf("%d ", path[j]);
    printf("\n%d\n", sum);
}