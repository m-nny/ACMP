
#include <iostream>

using namespace std;

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt","w", stdout);
	short int a, b;
	int c;
	cin>>a>>b>>c;
	if (a * b == c)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}