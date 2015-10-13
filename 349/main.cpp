
#include <iostream>
#include <string>

using namespace std;

bool pr[1000];

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt","w", stdout);
	int n, m;
	string s;
	cin>>m>>n;
	pr [1] = true;
	for (int i=2; i * i <= n; i++)
	if (! pr [i])
		for (int j = i + i; j<=n; j+=i)
			pr [j] = true;
	bool f = false;
	for (int i = m; i<=n; i++)
	if (! pr [i])
	{
		cout<<i<<" ";
		f = true;
	}
	if (! f)
		cout<<"Absent";
	return 0;
}
