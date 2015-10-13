#include <iostream>

using namespace std;

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt","w", stdout);
	int n;
	short int h, m;
	int s[110];
	cin>>n;
	for (int i=0; i<n; i++)
	{
		cin>>h>>m>>s[i];
		s[i] += h * 3600+ m * 60;
	}
	int tmp;
    for(int i = 0; i < n; ++i) // i - номер текущего шага
    { 
        int pos = i; 
        tmp = s[i];
        for(int j = i + 1; j < n; ++j) // цикл выбора наименьшего элемента
        {
            if (s[j] < tmp) 
           {
               pos = j; 
               tmp = s[j]; 
           }
        }
        s[pos] = s[i]; 
        s[i] = tmp; // меняем местами наименьший с a[i]
    }

	for (int i=0; i<n; i++)
		cout<<s[i] / 3600 <<" "<< (s[i] / 60) % 60 << " " << s[i] % 60<<endl;
	return 0;
}