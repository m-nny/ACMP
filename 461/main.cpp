#include <iostream>

using namespace std;

int mas[1002];

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt","w", stdout);
	int n, q=0;
	cin>>n;
	for (int i=0; i<n; i++)
		cin>>mas[i];
	for (int j=0; j<n-1; j++)
		for (int k=j + 1; k<n; k++)
			if (mas[j] > mas[k])
				swap (mas[j], mas[k]);
	for (int i=0; i < n/2 + 1; i++)
	{
		q+= mas[i] / 2 + 1;
	}
	cout<<q;
	return 0;
} 