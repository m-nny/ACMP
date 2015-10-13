
#include <sstream>
#include <iostream>
#include <string>

using namespace std;

bool pr[100001];

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt","w", stdout);
	string s;
	pr [1] = true;
	for (int i=2; i * i <= 100000; i++)
	if (! pr [i])
		for (int j = i + i; j<=100000; j+=i)
			pr [j] = true;
	for (int i=2; i<=100000; i++)
	if (! pr [i])
	{	
	  ostringstream ost;
	  ost << i;
	  s.append(ost.str());
	}
	short int n;
	int k;
	cin>>n;
	for (int i=0; i<n; i++)
	{
		cin>>k;
		cout<<s[k-1];
	}
	return 0;
}
