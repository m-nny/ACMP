
#include <iostream>
#include <set>

using namespace std;

string s, q;
set <string> se;

void rec (int uk)
{
	if (uk  + 1 == s.size())
		return;
	if (s [uk] != '0')
	{
		if (q.size() == 3)
		{
			cout<<q<<" ";
			se.insert(q);
			q = "";
		}
		else
			q+=s[uk];
		for (int i = uk + 1; i + uk <= s.size(); i++)
			rec (uk + i);
	}
	return;
}

int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt","w", stdout);
	getline(cin, s);
	rec(0);
	cout<< se.size();
	return 0;
} 