
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <set>
#include <ctime>
#include <cmath>

using namespace std;

#define ll long long
#define INF int(1e9+7)
#define pb push_back
#define mp make_pair
#define F first
#define S second

struct box
{
	int x1, y1;
	int x2, y2;
};

int per(box a, box b)
{
	box out;
	out.x1 = max(a.x1, b.x1);
	out.x2 = min(a.x2, b.x2);
	out.y1 = max(a.y1, b.y1);
	out.y2 = min(a.y2, b.y2);
	if (out.x1 >= out.x2 || out.y1 >= out.y2)
		return 0;
	return (out.x2 - out.x1) * (out.y2 - out.y1);
}

int n, ans;
box a[30];

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
		scanf("%d%d%d%d", &a[i].x1, &a[i].y1, &a[i].x2, &a[i].y2);
	scanf("%d%d%d%d", &a[0].x1, &a[0].y1, &a[0].x2, &a[0].y2);
	for (int i = 1; i <= n; i++)
	{
		ans += per(a[0], a[i]);
		//printf("%d ", per(a[0], a[i]));
	}
	printf("%d", ans);
}