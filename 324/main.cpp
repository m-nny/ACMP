
#include <iostream>
#include <cstdio>

using namespace std;

string s;

int main()
{
	cin >> s;
	if (s[0] == s[3] && s[1] == s[2])
		cout << "YES";
	else
		cout << "NO";
}

