#include <bits/stdc++.h>
 
int n;
char s[350];
std::set <int> a = {65, 66, 67, 69, 72, 75, 77, 79, 80, 84, 88, 89};
 
#define f(x) 47 < x & x < 58
#define d(x) a.count(x)

int main()
{
    std::cin>>n;
    while (n--)
    {
        std::cin>>s;
        puts(strlen(s) == 6 & std::regex_match("") ? "No" : "Yes");
    }
}
