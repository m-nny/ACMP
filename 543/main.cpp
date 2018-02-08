
#include<bits/stdc++.h>

using namespace std;

int main()
{
	long long n, w, d, p;
	cin >> n >> w >> d >> p;
	long long s = 0;
	for (int i = 1; i < n; i++) {
		s += i * w;
	}
	if (s == p) {
		cout << n;
	}
	else {
		cout << (s - p) / d;
	}
}
