
#include <iostream>
#define ll long long

using namespace std;

bool pr(int x)
{
	for (int i = 2; i * i <= x; i++)
		if (x % i == 0)
			return 0;
	return 1;
}

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt","w", stdout);
	int n, res = 0;
	cin >> n;
	for (int i = n + 1; i < n * 2; i++)
		if (pr(i))
			res++;
	cout << res;
	return 0;
} 