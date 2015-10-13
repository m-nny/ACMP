
#include <iostream>

using namespace std;

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt","w", stdout);
	short int a, b, c, d;
	cin>>a>>b>>c>>d;
	for (int i=-100; i<=100; i++)
	{
		if (a * i * i * i + b * i * i +  c * i + d == 0)
			cout<<i<<" ";
	} 
	return 0;
}