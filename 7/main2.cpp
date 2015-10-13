
#include <cstdio>
#include <cstring>

using namespace std;

char x[120], y[120], z[120];

int main()
{
	#ifdef LOCAL
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	scanf("%s %s %s", x, y, z);
	printf("%s", max(max(x, y), z));
}