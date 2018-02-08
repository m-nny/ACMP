
#include <bits/stdc++.h>

using namespace std;

int n;

int S(int x) {
	int cnt = 0;
	while (x > 0) {
		if (x % 2 == 1)
				cnt++;
		x /= 2;
	}
	return cnt;
}

int main() {
	int x;
	scanf("%d", &x);
	printf("%d", x + S(x));
}
