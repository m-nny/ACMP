
#include <iostream>
#include <cmath>

using namespace std;

int n;

int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	cin>>n;
	int mas[20], mini = 100002;
	int buf1[20], buf2[20], b1 = 0, b2 = 0;
	for (int i = 0; i < n; i++)
		cin>>mas [i];
	for (int mask = 0; mask < (1 << n); mask++)
	{
		for (int i = 0; i < n; i++)
			if ((mask & (1 << i)) > 0)
				buf1 [b1] = mas [i], b1++;
			else
				buf2 [b2] = mas [i], b2++;
		int s1 = 0, s2 = 0;
		for (int i = 0; i < b1; i++)
			s1 +=buf1 [i];
		for (int i = 0; i < b2; i++)
			s2 +=buf2 [i];
		if (abs(s1 - s2) < mini)
			mini = abs (s1 - s2);
		b1 = 0;
		b2 = 0;
	}
	cout<<mini;
}