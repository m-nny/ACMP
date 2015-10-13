#include <iostream>

using namespace std;

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt","w", stdout);
	short int n, a=-1, b=-1;
	short int ma[101], mb[101];
	cin>>n;
	int k;
	for (int i=1; i<=n; i++)
	{
		int k;
		cin>>k;
		if (k % 2 == 0)
		{
			b++;
			mb[b]=k;
		}
		if (k % 2 == 1)
		{
			a++;
			ma[a]=k;
		}
	}
	for (int i=0; i<=a; i++)
		cout<<ma[i]<<" ";
	cout<<endl;
	for (int i=0; i<=b; i++)
		cout<<mb[i]<<" ";
	cout<<endl;
	if (b > a)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}