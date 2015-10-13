
#include <iostream>
#include <string>

using namespace std;

bool pr(int n)
{
	for (int i = 2; i * i <= n; i++)
		if (n % i == 0)
			return 0;
	return 1;
}

int main()
{
	bool bl = 0;
	freopen("input.txt", "r", stdin);
	freopen("output.txt","w", stdout);
	int n, m;
	cin >> n >> m;
	for (; n <= m; n++)
		if (pr(n))
			cout << n <<" ", bl = 1;
	if (!bl)
		cout << "Absent";
}
