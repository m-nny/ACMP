#include <fstream>
main()
{
	std::ifstream i("input.txt");
	std::ofstream o("output.txt");
	int a, b, c, d;
	i >> a >> b >> c >> d;
	abs(c-a) == abs(d-b)?o<<1:
	(a+b)%2==(c+d)%2?o<<2:o<<0;
}