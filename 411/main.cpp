
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <set>
#include <ctime>
#include <cmath>

using namespace std;

#define pb push_back
#define mp make_pair
#define F first
#define S second
#define fr(ii, ee) for (int ii = 0; ii < ee; ii++)
#define fbr(ii, bb, ee) for (int ii = bb; ii < ee; ii++)
#define fn ""
#define TED

typedef long long ll;
typedef unsigned long long ull;
typedef string str;
typedef pair <int, int> pii;
typedef vector <int> vi;
typedef set <int> si;
typedef map <int, int> mii;
typedef map <str, int> msi;

const int inf = (int)(1e9+7), maxn = (int)(2e5);
double eps = (1e-7);

int main()
{
	#ifdef TED
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	double a, b, c, D;
	cin >> a >> b >> c;
	if (a == 0 && b == 0 && c == 0)
	{
		cout << -1;
		return 0;
	}
	if (a == 0)
	{
		if (b == 0)
			cout << 0;
		else
			printf("1\n%.8f", (-c)/b);
		return 0;
	}
	D = b * b - 4 * a * c;
	if (D < 0)
	{
		puts("0");
		return 0;
	}
	double d = sqrt(D);
	double x1 = (-b+d)/(2*a), x2 = (-b-d)/(2*a);
	if (d == 0)
		printf("1\n%.8f", x1);
	else
		printf("2\n%.8f\n%.8f", x1, x2);
}
