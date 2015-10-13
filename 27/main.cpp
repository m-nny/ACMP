
#include <iostream>

using namespace std;

int a[101][101];

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt","w", stdout);
	int w, h, n, c = 0;
	int x1, x2, y1, y2;
   cin>>w>>h>>n;
	for (int j=0; j < w; j++)
		for (int k=0; k < h; k++)
			a [j] [k] = 0;
   for (int i=0; i<n; i++)
   {
     cin>>x1>>y1>>x2>>y2;
     for (int y = y1; y < y2; y++)
     {
       for (int x = x1; x < x2; x++)
         a [y] [x]=1;
     }
   }
   for (int y = 0; y < h; y++)
   {
     for (int x = 0; x < w; x++)
       c = c + 1 - a [y] [x];
   }
   cout<<c;
   return 0;
}