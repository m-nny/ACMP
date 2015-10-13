
#include <string>
#include <iostream>

using namespace std;

string st;
int q = 0;

void rec(int uk, int i)
{
	if (uk == st.size())
	{
		q++;
		return;
	}
	
	int buf = (int) st [uk] - 'a';
	if (st [uk] == "?")
		for (int i=0; i <= 9; i++)
			rec (0, i);
	else
		for (int i = 0; i <= 4; i++)
			rec (0, i);
	return;
}

int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt","w", stdout);
	getline(cin, st);
	if (st [0] == '?')
		for (int i=0; i <= 9; i++)
			rec (0, i);
	else
		for (int i = 0; i <= 4; i++)
			rec (0, i + st [0] - 'a');
	cout<<q;
	return 0;
} 