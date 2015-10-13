
#include <iostream>

using namespace std;

int mas [51] [51], n, x1, y1, x2, y2;
char sm [300];

void wr()
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cout<<mas [i] [j] << " ";
		cout << '\n';
	}
	return;
}

void dfs (int x, int y)
{
	mas [x] [y] = char ('+');
	if (x !=  0)
		if (mas [x - 1] [y] == '.')
			dfs (x - 1, y);
	if (y !=  0)
		if (mas [x] [y - 1] == '.')
			dfs (x, y - 1);
	if (x !=  n)
		if (mas [x + 1] [y] == '.')
			dfs (x + 1, y);
	if (y !=  n)
		if (mas [x] [y + 1] == '.')
			dfs (x, y + 1);
	return;

}

int main()
{
	freopen ("input.txt", "r", stdin);
	freopen ("output.txt", "w", stdout);
	cin>>n;
	char buf;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		{
			cin>>mas [i] [j];
			if (mas [i] [j] == 'X')
				x1 = i, y1 = j;
			if (mas [i] [j] == '@')
				x2 = i, y2 = j;
		}
	cout << x1 << " " << y1 << '\n';
	dfs (x1, y1);
	wr();
	if (x2 !=  0)
		if (mas [x2 - 1] [y2] == '+')
		{
			cout<<"Yes";
			wr();
			return 0;
		}
	if (y2 !=  0)
		if (mas [x2] [y2 - 1] == '+')
		{
			cout<<"Yes";
			wr();
			return 0;
		}
	if (x2 !=  n)
		if (mas [x2 + 1] [y2] == '+')
		{
			cout<<"Yes";
			wr();
			return 0;
		}
	if (y2 !=  n)
		if (mas [x2] [y2 + 1] == '+')
		{
			cout<<"Yes";
			wr();
			return 0;
		}
	cout<<"No";
	return 0;
}