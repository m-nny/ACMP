#include <iostream>

using namespace std;

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt","w", stdout);
	int a, b, c;
	cin>>a>>b>>c;
	cout<<max(a, max(b, c)) - min(a, min(b, c));
	return 0;
}