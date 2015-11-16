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
#define fn

char * S(int t)
{
	char * s = new char[6];
	sprintf(s, "%02d:%02d", t / 60, t % 60);
	return s;
}

bool check(char * s)
{
	return s[0] == s[4] && s[1] == s[3];
}

int main()
{
	#ifdef fn
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	int h, m;
	scanf("%d:%d", &h, &m);
	m += h * 60;
	m++;
	if (m >= 1440)
		m -= 1440;
	while (!check(S(m)))
	{
		m++;
		if (m >= 1440)
			m -= 1440;
	}
	puts(S(m));
}
