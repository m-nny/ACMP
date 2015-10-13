#include <iostream>

using namespace std;

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt","w", stdout);
	short int n, mas[100];
	short mini=100, maxi=-150, mi, ma;
	int q=0, w=1;
	cin>>n;
	for (int i=0; i<n; i++)
	{
		cin>>mas[i];
		if (mas[i] < mini)
		{
			mini = mas[i];
			mi = i;
		}
		if (mas[i] > maxi)
		{
			maxi = mas[i];
			ma = i;
		}
		if (mas[i] > 0)
			q+=mas[i];
	}
	if (mi > ma)
		swap(ma, mi);
	for (int i=mi+1; i<ma; i++)
		w*=mas[i];
	cout<<q<<" "<<w;
	return 0;
} 