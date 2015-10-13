
#include <iostream>

using namespace std;

int d[11] [11] [11];
int n, m ,k, mas [11];

int rec()
{
	
}

int main()
{
	cin >> n >> m >> k;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
		{
			int x;
			cin >> x;
			mas [i] += x;
		}
	rec();

	return 0;
}