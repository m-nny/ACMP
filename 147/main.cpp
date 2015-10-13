
#include <iostream>
#include <vector>
#include <cmath>
#define ll long long
#define pb push_back

using namespace std;

int n, x;
vector <ll> vec;

bool f (int s)
{
	int x = 0, y = 0;
	for (int i = 0; i < 3; i++)
		y += s % 10, s /= 10;
	for (int i = 0; i < 3; i++)
		x += s % 10, s /= 10;
	return (x == y);
}

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt","w", stdout);
	cin >> n;
	vec.pb(0);
	vec.pb(1);
	for (int i = 2; i <= n; i++)
		vec.pb(vec[i - 1] + vec [i - 2]);
	cout << vec [n];
	return 0;
}