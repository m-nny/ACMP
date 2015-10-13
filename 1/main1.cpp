#include <bits/stdc++.h>

using namespace std;

long long n, m, kmin, kmax;

long long summ(long long v) {
    long long res = v * (v - 1);
	return res / 2;

}
int main () {
	cin>>n>>m;
	kmax = summ(n - m + 1);
	if(m % n== 0)
    {
		kmin = (n / m) * (summ(n / m));
	}
	else {
		kmin=((m - (n % m)) * (summ(n/m))+((n%m)*summ(n / m + 1)));
	}

	cout<<kmin<<" "<<kmax;

	return 0;
}
