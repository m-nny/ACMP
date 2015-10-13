
#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <string>

using namespace std;

#define ll long long
#define str string
#define INF (int)(1e8+1)
#define mp make_pair
#define pb push_back
#define inf "input"
#define outf "output"

int main()
{
	freopen(inf".txt", "r", stdin);
	freopen(outf".txt", "w", stdout);
	str in;
	getline(cin, in);
	int sz = 0, m = -1;
	for (int i = 0; i < in.size(); i++)
		if (in[i] == '0')
			sz++;
		else
			m = max(m, sz), sz = 0;
	m = max(m, sz);
	cout << m;
}