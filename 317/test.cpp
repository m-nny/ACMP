
#include<iostream>

using namespace std;

int main(){ 
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int x,y,z,w; 
	cin>>x>>y>>z>>w; 
	int c = 1; 

	for(int i=0; i <= 1000; i++)
	{
		for(int j=0; j <= 1000; j++)
		{
			for(int k = 0;k <= 1000; k++)
			{
				if(k==0 && j==0 && i==0)
					c--;
				int gift = w - x*i - y*j - z*k; 
				if(gift == 0)
				{
					c++;
					break;
				}
				if(gift < 0) break; 
				if(gift > w) break; 
			}
		} 
	} 
	cout<<c; 
	return 0; 
}