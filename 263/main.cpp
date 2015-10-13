
#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <string>
#include <cmath>

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
	int n, a, b;
	cin >> n >> a >> b;
	cout << min(abs(b - a), abs(n - abs(b - a))) - 1;
}