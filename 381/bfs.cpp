
#include <iostream>

using namespace std;

#define F first
#define S second
#define mp make_pair
#define pb push_back
#define pp pair< pair<int, int>, pair<int, int> >

bool g[55][55], us[55][55];
int n;
nt s, f;
map<pp> pr;

int main()
{
	freopen ("input.txt", "r", stdin);
	freopen ("output.txt", "w", stdout);
	cin >> n;
	char ci;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
		{
			cin>>ci;
			if (ci == '.')
				g[i][j] = 1;
			if (ci == 'O')
				g[i][j] = 0;
			if (ci == 'X')
				sx = i, sy = j;
			if (ci == '@')
				fx = i, fy = j;
		}
	queue <pair<int, int> > qu;
	qu.push(mp(sx, sy));
	pr.insert(mp(sx, sy),mp(-1, -1));
	while (!qu.empty())
	{
		pair<int,int> fr = qu.front();
		int x = fr.F, y = fr.S;
		qu.pop();
		us[x][y] = 1;
		if (x < n && !us[x + 1][y] && g[x + 1][y])
			qu.push(mp(x + 1, y)), pr.insert(mp(x + 1, y),mp(x, y));
		if (x > 1 && !us[x - 1][y] && g[x - 1][y])
			qu.push(mp(x - 1, y)), pr.insert(mp(x - 1, y),mp(x, y));
		if (y < n && !us[x][y + 1] && g[x][y + 1])
			qu.push(mp(x, y + 1)), pr.insert(mp(x, y + 1),mp(x, y));
		if (y > 1 && !us[x][y - 1] && g[x][y - 1])
			qu.push(mp(x, y - 1)), pr.insert(mp(x, y - 1),mp(x, y));
	}
	if (!us[xf][yf])
		cout << "NO";
	else
	{
		cout << "YES\n";
		int x = fx, y = fy;
		while (x !=  xs && y != ys)
		{
			res[x][y] = 1;
			int xb = x, yb = y;
			x = pr[mp(xb, yb)].F, y = pr[mp(xb, yb)].S;
		}
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				if (x == fx && y == fy)
				{
					cout << '@';
					continue;
				}
				if (res[x][y])
					cout << '+';
				else
				{
					if (g[x][y])
						cout << '.';
					else
						cout << 'O';
				}
			}
			puts("");
		}
	}
	return 0;
}