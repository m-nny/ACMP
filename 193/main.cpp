
#include <iostream>

using namespace std;

int main()
{
	int n, m, q;
	int mas [201] [201];
	cin>>n>>m>>q;
	for (int j = 0; j < n; j++)
		for (int k = 0; k < m; k++)
			cin>>mas [j] [k];
	for (int i = 1; i <= q; i++)
	{
		int ux = 0, uy = 0;
		bool b = false;
		for (int j = 0; j < n; j++)
		{
			for (int k = m - 1; k >= 0; k--)
				if (mas [j] [k] == i)
				{
					cout<<i<<" x1 = "<<j<<" y1 = "<<k;
					ux = j;
					uy = k;
					b = true;
					break;
				}
			if (b)
				break;
		}
		while ((mas [ux] [uy + 1] == i) || (mas [ux + 1] [uy] == i))
		{	
			if (mas [ux] [uy + 1] == i)
				ux++;
			if (mas [ux + 1] [uy] == i)
				uy++;
		}
		cout<<" x2 = "<<ux<<" y2 = "<<uy<<'\n';
	}
	return 0;
}