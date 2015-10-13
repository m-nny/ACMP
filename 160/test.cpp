
#include <iostream>

using namespace std;

int p[100], mas [100], n, op [100];
int out [100];

//умножение перестановки op на p
void pr()
{
	for (int i = 1; i <= n; i++)
		out [i] = mas[p [i]];
}

//Получение обратной перестановки из p
void ob()
{
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			if(p[j] == i) 
				op[i] = j;
	return;
}

int main()
{
	cin >> n;
	return 0;
}