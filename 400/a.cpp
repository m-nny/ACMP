#include <cstdio>
#include <algorithm>
 
using namespace std;
 
typedef pair <int, int> pii;
 
#define F first
#define S second
 
pii a[7];
pii b[4];
 
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int i = 0;
    while(i < 6)
    {
        scanf("%d%d", &a[i].F, &a[i].S);
        if (a[i].F > a[i].S)
            swap(a[i].F, a[i].S);
        i++;
    }
    sort(a, a + 6);
    i = 0;
    while(i < 6)
    {
        if (a[i] != a[i + 1])
            {puts("IMPOSSIBLE"); return 0;}
        i += 2;
    }
    i = 0;
    while(i < 6)
        b[i / 2] = a[i], i += 2;
    if (b[0].F != b[1].F || b[0].S != b[2].F || b[1].S != b[2].S)
        printf("IM");
    puts("POSSIBLE");
}