#include <iostream>
#define st string

using namespace std;

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt","w", stdout);
	int a, res = 0, i = 1;
	cin >> a;
	for (; i * i < a; i++)
		if (a % i == 0)
			res += i + a / i;
	if (i * i == a)
		res += i;
	cout << res;
	return 0;
} 