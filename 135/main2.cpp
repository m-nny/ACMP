
#include <iostream>
#include <vector>

using namespace std;

struct edge
{
	int a, b, cost;
};
 
int n, m, v;
vector <edge> e;
const int INF = 101;

int main()
{
	vector<int> d (n, INF);
	d[v] = 0;
	for (;;) {
		bool any = false;
		for (int j=0; j<m; ++j)
			if (d[e[j].a] < INF)
				if (d[e[j].b] > d[e[j].a] + e[j].cost) {
					d[e[j].b] = d[e[j].a] + e[j].cost;
					any = true;
				}
		if (!any)  break;
	}
	cout<<d;
}