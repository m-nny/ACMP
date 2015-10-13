
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s = "Trolololo";
	do
	s.erase(s.find("o", 0), 1);
	while (s.find("o", 0) <= s.size()) ;
	cout<<s;
}