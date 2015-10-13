
#include <iostream>

using namespace std;

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt","w", stdout);
	int a1, a2, n;
	cin>>a1>>a2>>n;
	cout<<a1 + (a2 - a1) * (n - 1);
}