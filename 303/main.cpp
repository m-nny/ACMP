
#include <iostream>
#include <string>
#define st string
#define ll long long
#define INF 100000000

using namespace std;

int mx = -INF;
st s;

int f(int uk)
{
	int res = 0;
	bool pl = 1;
	for (int i = 0; i < s.size(); i++)
		if (i != uk)
		{
			if (pl)
				res += int (s[i] - '0');
			else
				res -= int (s[i] - '0');
			pl = ! pl;
		}
	return res;
}

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt","w", stdout);
	getline(cin, s);
	for (int i = 0; i < s.size(); i++)
		mx = max(mx, f(i));
	cout << mx;
	return 0;
} 