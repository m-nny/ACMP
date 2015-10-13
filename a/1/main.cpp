#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int n = 1000;
	for(int i = -n; i < n; i++)
		for(int j = -n; j < n; j++)
			for(int k = -n; k < n; k++)
				if (i + j + k == 18 && i * i + j * j + k * k == 756 && i * i == j * k)
					cout << i << " " << j << " " << k << '\n';
} 
