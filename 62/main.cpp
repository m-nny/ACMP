
#include <iostream>
#include <string>

using namespace std;

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt","w", stdout);
	string s;
	getline(cin, s);
	int x = int (s[0] - 'A'), y = int (s[1] - '0');
	if (((x % 2) + (y % 2)) % 2 == 1)
		cout<<"BLACK";
	else
		cout<<"WHITE";
	return 0;
} 