#include <fstream>

int main()
{
	std::ifstream i("input.txt");
	std::ofstream o("output.txt");
	int a;
	i>>a;
	o<<a;
} 