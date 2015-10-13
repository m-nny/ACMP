
#include <iostream>
#include <string>

using namespace std;

int x, y;
string s;

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt","w", stdout);
	getline(cin, s);
	for (int i = 0; i * 2 < s.size(); i++)
		x += int (s[i] - '0'), y += int (s[s.size() - i - 1] - '0');
	if (x == y)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}