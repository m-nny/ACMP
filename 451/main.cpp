
#include <iostream>
#include <algorithm>

using namespace std;

int cnt(string s)
{
	do
	s.erase(s.find(" ", 0), 1);
	while (s.find(" ", 0) <= s.size());
	if (s.subsrt(0, 1) == "(")
		s.erase(0, 1);
	if (s.subsrt(s.size() - 1, 1) == "(")
		s.erase(s.size() - 1, 1);
	int uk = s.size();
	while (uk >= 0)
	{
		if (s.substr (uk, 1) == ")")
			while ( s.substr (uk, 1) == "(")
				uk--;
		if (s.substr (uk, 1) == "-")
			cnt(s.subsrt (0, uk - 1)) - cnt(s.substr (uk + 1, s.size()));
	}
	int uk = s.size();
	while (uk >= 0)
	{
		if (s.substr (uk, 1) == ")")
			while ( s.substr (uk, 1) == "(")
				uk--;
		if (s.substr (uk, 1) == "+")
			cnt(s.subsrt (0, uk - 1)) - cnt(s.substr (uk + 1, s.size()));
	}
	int uk = s.size();
	while (uk >= 0)
	{
		if (s.substr (uk, 1) == ")")
			while ( s.substr (uk, 1) == "(")
				uk--;
		if (s.substr (uk, 1) == "/")
			cnt(s.subsrt (0, uk - 1)) - cnt(s.substr (uk + 1, s.size()));
	}
	int uk = s.size();
	while (uk >= 0)
	{
		if (s.substr (uk, 1) == ")")
			while ( s.substr (uk, 1) == "(")
				uk--;
		if (s.substr (uk, 1) == "*")
			cnt(s.subsrt (0, uk - 1)) - cnt(s.substr (uk + 1, s.size()));
	}
}

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt","w", stdout);



	return 0;
} 