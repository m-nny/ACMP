
#include <bits/stdc++.h>

using namespace std;

typedef long long  ll;
typedef unsigned long long ull;
typedef map <int, int> mii;
typedef pair <int, int> pii;
typedef pair <ll, ll> pll;

int const maxn = int(1e5 + 12);
int const maxb = int(2e6 + 12);
int const inf = int(1e9 + 7);
ll const linf = ll(1e18 + 12);
double const eps = 1e-7;
double const pi = acos(-1);
#ifdef _WIN32
	#define I64 "%I64d"
#else
	#define I64 "%lld"
#endif
#define mp make_pair
#define pb push_back
#define F first
#define S second
#define next MyLittleNext
//#define end MyLittleEnd
#define all(x) x.begin(), x.end()
#define LOCAL

int a[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main()
{
	#ifdef LOCAL
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	int d1, m1, y1, d2, m2, y2;
	scanf("%d.%d.%d", &d1, &m1, &y1);
	scanf("%d.%d.%d", &d2, &m2, &y2);
	m1--, m2--;
	d1 += (y1 - 93) * 365;
	for (int i = 0; i < m1; i++)
		d1 += a[i];
	d2 += (y2 - 93) * 365;
	for (int i = 0; i < m2; i++)
		d2 += a[i];
	printf("%d", abs(d1 - d2));
}
