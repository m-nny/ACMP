
#include <iostream>

using namespace std;

int n, m, k, d [11];
int mas[11];
pair <int, int> p[11];

void fun (int q)
{
	
}

int main()
{
	char x;
	cin >> n >> m >> k;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
		{
			cin >> x;
			if (x == 'Y')
				mas [i]++;
		}
	for (int i = 1; i <= k; i++)
		fun(i);
	cout << fun(k);
	return 0;
}