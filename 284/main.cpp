
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
	int mas [1001], n, m, l, r;
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> mas [i];
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> l >> r;
		for (; l <= r; l++)
			cout << mas [l] << " ";
		puts("");
	}
}