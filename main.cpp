#include <iostream>

int main(int argc, const char *argv[])
{
	std::cout << "Example by Mason Butler\n";
	std::string filename;
	if (argc < 2) 
	{
		std::cout << "Please drag and drop a file onto .exe.\nProgram ending.";

		// stop terminal from closing
		int x;
		std::cin >> x;

		return 1;
	}
	
	filename = argv[1];

	int x;
	std::cin >> x;

	return 0;
}
