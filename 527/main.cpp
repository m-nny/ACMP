
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

ll a, b, c, d;
int n;

bool gcd(ll a, ll b)
{
	ll A = a, B = b;
	ll C = c, D = d;
	if (a < b)
		swap(a, b);
	if (c < d)
		swap(c, d);
	c %= d;
	swap(c, d);
	while (b)
	{
		if (a == c && b == d && C <= A && D <= B)
			return 1;
		a %= b;
		swap(a, b);
	}
	return a == c && b == d && C <= A && D <= B;
}

int main()
{
	#ifdef TED
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		scanf("%I64d%I64d%I64d%I64d", &a, &b, &c, &d);
		//printf("%I64d %d\n", __gcd(a, b), gcd(a, b));
		puts(gcd(a, b) ? "YES" : "NO");
	}
}
