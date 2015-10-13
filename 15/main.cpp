#include <iostream>

using namespace std;

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt","w", stdout);
	int a, b, q=0;
	cin>>a;
	for (int i=0; i<a; i++)
		for (int j=0; j<a; j++)
		{
			cin>>b;
			q+=b;
		}

	cout<<q/2;
	return 0;
} 