#include <iostream>

using namespace std;

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt","w", stdout);
	int a = 0, b = 0, x, y;
	for (int i=1; i<=4; i++)
	{
		cin>>x>>y;
		a+=x;
		b+=y;
	}
	if (a>b)
		cout<<1;
	if (a<b)
		cout<<2;
	if (a==b)
		cout<<"DRAW";
	return 0;
} 