#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <set>
#include <ctime>
#include <cmath>
 
using namespace std;
 
#define ll long long
#define str string
#define INF (int)(1e9+7)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define fr(ii, ee) for (int ii = 0; ii < ee; ii++)
#define frv(ii, ite, vv) for(vector<ite>::iterator ii = vv.begin(); ii != vv.end(); ii++)
#define frs(ii, ite, vv) for(set<ite>::iterator ii = vv.begin(); ii != vv.end(); ii++)
#define frq(ii, ite, vv) for(queue<ite>::iterator ii = vv.begin(); ii != vv.end(); ii++)
 
int B(int m)
{
    vector<bool> q;
    while (m > 0)
    {
        q.pb(m%2);
        m/=2;
    }
    int out = 0, t = 1, sz = q.size();
    fr(i, sz)
    {
        out += t * (q[sz - i - 1]);
        t *= 2;
    }
/*
    fr(i, sz)
        cout << q[sz - i - 1];
    puts("");*/
    return out;
}
 
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int m;
    cin >> m;
    cout << B(m);
}