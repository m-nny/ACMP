#include <cstdio>
#include <cmath>
#include <cstdio>
#include <iostream>

using namespace std;


int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt","w", stdout);
 unsigned short int res=1;
 char x1,y1,x2,y2,tmp;
 scanf("%c%c%c%c%c",&x1,&y1,&tmp,&x2,&y2);
 x1=x1-64;
 x2=x2-64;
 y1=y1-48;
 y2=y2-48;
 if ((x1<0)||(x1>8)||
 (x2<0)||(x2>8)||
 (y1<0)||(y1>8)||
 (y2<0)||(y2>8)||(tmp!='-')) res=3; 
 else
 {
 switch (abs(x2-x1))
 {
 case 1:
 if (abs(y1-y2)!=2) res=2;
 break;
 case 2:
 if (abs(y1-y2)!=1) res=2;
 break;
 default:
 res=2;
 break;
 };
 };
 
 switch (res)
 {
 case 1: cout << "YES";
 break;
 case 2: cout << "NO";
 break;
 case 3: cout << "ERROR";
 break;
 };
}