
#include <iostream>
#include <set>
#include <string>

using namespace std;

string s;
set <string> se;
/*
int stoi (string st)
{
   int q = 0, i = 0;
   for (int i = 0; i < st.size(); ++i)
	{
		int buf = (int) st [i];
   	q = q * 10 + (buf - 48);
  	}
   return q;
}*/

void rec(int uk)
{
	if (uk  + 1 == s.size())
		return;
	if (s [uk] != '0')
	{
		se.insert(s.substr(uk, 3));
		rec (uk + 1);
	}
	return;
}

int main()
{
	/*freopen("input.txt", "r", stdin);
	freopen("output.txt","w", stdout);*/
	getline(cin, s);/*
	if (s.size() < 3)
	{
		cout << 0;
		return 0;
	}
	if (s.size() == 3)
	{
		cout << 1;
		return 0;
	}*/
	rec (0);
	cout<< se.size() + 1 << '\n';
	for (set <string> :: iterator it = se.begin(); it != se.end(); it++)
		cout << *it << '\n';
	return 0;
} 