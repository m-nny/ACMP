#include <fstream>

main()
{
	long long n, m;
	std::ifstream i("input.txt");
	std::ofstream o("output.txt");
	i >> n >> m;
	long long r = (m+n-1)/n-1;
	o << r;
}