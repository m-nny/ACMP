#include <iostream>

using namespace std;

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt","w", stdout);
	int a, b;
	cin>>a>>b;
	if (a>b)
		cout<<">";
	if (a<b)
		cout<<"<";
	if (a==b)
		cout<<"=";
	return 0;
} 