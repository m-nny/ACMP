
#include <string>
#include <iostream>

using namespace std;

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt","w", stdout);
	string s;
	cin>>s;
	if ((s[0] == s[3]) && (s[1] == s[2]))
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}