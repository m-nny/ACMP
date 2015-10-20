
#include <bits/stdc++.h>

using namespace std;

char a[300], b[300], c[600];
int C, n, m;

bool cmp(int i, int j)
{
	while (i < n && j < m && a[i] == a[j])
		i++, j++;
	if ((i == n) ^ (j == m))
	{
		if (i == n)
		{
			i--;
			while (j < m && a[i] == a[j])
				j++;
			if (j == m)
				j--;
		}
		if (j == m)
		{
			j--;
			while (i < n && a[i] == a[j])
				i++;
		}
		return a[i] <= a[j];
	}
	if ((i == n) & (j == m))
		return 1;
	return a[i] < a[j];
}

int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	scanf("%s\n%s", a, b);
	int x = 0, y = 0;
	n = strlen(a), m = strlen(b);
	while (x < n && y < m)
	{
		if (a[x] != b[y])
		{
			if (a[x] < b[y])
				c[C++] = a[x++];
			else
				c[C++] = b[y++];
			//cerr << "<";
			continue;
		}
		int X = x, Y = y;
		X++, Y++;
		while (X < n && Y < m && a[X] == b[Y] && a[X] <= a[X - 1])
			X++, Y++;
		//cerr << x << " " << y << " " << X << " " << Y << '\n';
		if (X == n || Y == m)
		{
			while (x < n && y < m)
			{
				if (cmp(x, y))
					c[C++] = a[x++];
				else
					c[C++] = b[y++];
			}
			//puts(c);
			continue;
		}
		if ((a[X - 1] < a[X] && b[Y - 1] < b[Y]) || (a[X] == b[Y]))
        {
        	//cerr << "!";
        	if (a[X] < b[y] || b[Y] < a[x])
        	{
        		//cerr << "?";
        		if (a[X] < b[y])
        		{
        			//cerr << "<?";
        			while (x <= X)
        				c[C++] = a[x++];
        			while (y <= Y)
        				c[C++] = b[y++];
	       			//puts(c);
        			continue;
        		}
       			//cerr << ">?";
       			while (y <= Y)
       				c[C++] = b[y++];
       			while (x <= X)
       				c[C++] = a[x++];
       			//puts(c);
       			continue;
        	}
        	for (; x < X; x++)
        		c[C++] = a[x];
        	for (; y < Y; y++)
        		c[C++] = b[y];
			//puts(c);
        	continue;
        }
		if (a[X] < b[Y])
		{
			for (; x <= X; x++)
				c[C++] = a[x];
			//puts(c);
			continue;
		}
		if (a[X] > b[Y])
		{
			for (; y <= Y; y++)
				c[C++] = b[y];
			//puts(c);
			continue;
		}
	}
	while (x < n)
		c[C++] = a[x++];
	while (y < m)
		c[C++] = b[y++];
	puts(c);
}
