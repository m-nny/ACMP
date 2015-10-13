
#include <iostream>

using namespace std;

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt","w", stdout);
	int a, b, a1, b1;
	cin>>a>>b;
	a1 = a;
	b1 = b;
	while(b) b^=a^=b^=a%=b;
	cout << a1 * b1 / a;
	return 0;
}