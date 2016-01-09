
#include <iostream>
#include <cstdio>

using namespace std;

int a[110], n;

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n; i++)
		if (i % 2 == 0)
			cout << a[i] << " ";
}

