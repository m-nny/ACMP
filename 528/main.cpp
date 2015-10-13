#include <iostream>

using namespace std;

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt","w", stdout);
	unsigned long long n, k;
	cin >> n >> k;
	unsigned long long s = n;
	for (int i = 2; i <= k; i++)
	{
//		cerr << s << " " ;
		s = i * n + s - 2*i + 1;
	}
	cout << s;
	return 0;
} 