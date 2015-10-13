#include <iostream>

using namespace std;

int n, mas[1001];

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt","w", stdout);
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> mas[n - i - 1];
	for (int i = 0; i < n; i++)
		cout << mas[i] << " ";
	return 0;
}