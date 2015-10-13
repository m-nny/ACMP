
#include <iostream>
#include <string>

using namespace std;

int n, mas[27];

void rec(int uk)
{
	if (uk == n)
	{
		if (mas [uk + 1] >= 5)
			cout<<mas[uk] + 1;
		else
			cout<<mas[uk];
		return;
	}
	if (uk == 1)
		cout<<".";
	cout<<mas [uk];
	rec (uk + 1);
}

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt","w", stdout);
	string s = "2.7182818284590452353602875";
	mas[0] = 2;
	for (int i=2; i < s.size() ; i++)
		if (s[i] != '.')
			mas[i - 1] = (int) s[i] - '0';
	cin>>n;
	rec(0);
	return 0;
} 