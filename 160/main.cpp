
#include <iostream>

using namespace std;

int p[100], n, bas[100];

//умножение перестановки op на p
void pr()
{
	int mas [100];
	for (int i = 1; i <= n; i++)
		mas [i] = p[p [i]];
	for (int i = 1; i <= n; i++)
		p[i] = mas [i];
	return;
}

bool ten()
{
	for (int i = 1; i <= n; i++)
		if (bas [i] != p [i])
			return false;
	return true;
}

int main()
{
	int cnt = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> p [i];
		bas [i] = p [i];
	}
	pr();
	cnt++;
	cout << cnt << ":";
	for (int i = 1; i <= n; i++)
		cout << p [i] << " ";
	while(! ten())
	{
		pr();
		cout << " ";
		cnt++;
	}
	cout  << cnt;
}