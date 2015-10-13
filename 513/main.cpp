
#include <fstream>

main()
{
	std::ofstream out("output.txt");
	std::ifstream in("input.txt");
	int n;
	in>>n;
	out<<(1<<n)-n-1;
}