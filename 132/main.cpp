
#include <iostream>
#include <set>
#include <vector>
#include <queue>
 
using namespace std;
 
#define inf 1000000002
#define mp make_pair

int pr[20010], d[20010];
int mas [20010] [20010];
 
int main()
{
    freopen ("input.txt", "r", stdin);
    freopen ("output.txt", "w", stdout);
    set <pair <int, int> > s;
    int n, r, t;
    cin >> n >> r >> t;
    r--;t--;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> mas [i] [j];
     
    fill (d, d + n, inf);
    d[r] = 0;
    s.insert(mp (d[r], r));
    
    while (!s.empty())
    {
        pair <int, int> p = *s.begin();
        s.erase(s.begin());
        int v = p.second;
        for (int i = 0; i < n; i++)
            if (mas [v][i] != -1)
            {
                int to = i, w = mas [v] [i];
                if (d[to] > d [v] + w)
                {
                    s.erase(mp(d[to], to));
                    d[to] = d[v] + w;
                    s.insert(mp(d[to], to));
                    pr [to] = v;
                }
            }
    }
    if (d [t] == inf)
        cout << -1;
    else
        cout << d [t];
    return 0;
}