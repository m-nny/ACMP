
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

const int inf = (int)(1e9+7), maxn = (int)(2e6), mod = (int)(1e9);
double eps = (1e-7);

int gcd(int a, int b)
{
	while(b)
	{
		a = (a % b)%mod;
		swap(a, b);
	}
	return a%mod;
}

int f[maxn];

int main()
{
	#ifdef TED
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	int a, b;
	cin >> a >> b;
	f[0] = 0;
	f[1] = 1;
	int k = gcd(a, b);
	fbr(i, 2, k+1)
		f[i] = (f[i-1] % mod + f[i-2] % mod) % mod;
	cout << f[k];
}