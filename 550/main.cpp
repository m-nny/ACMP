#include <iostream>
#define st string

using namespace std;

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt","w", stdout);
	int a;
	cin >> a;
	int b = a;
	int len = 0, c = b;
	while (c > 0)
		len++, c /=10;
	if (a % 100 == 0)
		a /= 100;
	if (a % 4 == 0)
		cout << 12;
	else
		cout << 13;
	cout << "/09/";
	for (int i = 0; i < (4 - len); i++)
		cout << "0";
	cout << b;
	return 0;
} 