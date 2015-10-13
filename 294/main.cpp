
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
	double m1, p1, c1;
	double m2, p2, c2;
	cin >> m1 >> p1 >> c1;
	cin >> m2 >> p2 >> c2;
	double q1 = m1 * (100 - p1)/100.0;
	double q2 = m2 * (100 - p2)/100.0;
//	cout << q1 << " " << q2 << '\n';
	double res = .0;
	if (q1 < q2)
	{
		res += (m1 - q1)*c1;
		res += (m2 - q1)*c2;
	}
	else
	{
		res += (m1 - q2)*c1;
		res += (m2 - q2)*c2;
	}

	cout << res;
}