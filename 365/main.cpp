#include <iostream>
#include <string>

using namespace std;

int n;

string itos (int i)
{
    string s = "";
    while (i > 0)
    {
        s = char (i % 10 + '0') + s;
        i /= 10;
    }
    return s;
}

void rec(int sum, string s, int q)
{
    if (sum == n)
    {
        cout<<s.substr(0, s.size() - 1)<<'\n';
        return;
	 }
    if (sum == 0)
    {
 	    for (int i = q; i + sum < n; i++)
 	    {
 	    if (i == n)
	 	 	 return;
	  	 rec (i + sum, s + itos(i) + '+', i);
	    }
	    return;
    }
    for (int i = q; i + sum <= n; i++)
    {
    if (i == n)
	 	 return;
	 rec (i + sum, s + itos(i) + '+', i);
    }
    return;
}

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    cin>>n;
    rec(0, "", 1);
    return 0;
}