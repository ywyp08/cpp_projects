#include <iostream>

int main(int argc, char **argv)
{
	int n;
	int x;

	if (argc == 1)
	{
		std::cout << "Enter a number\n";
		return -1;
	}
	if (argc > 2)
	{
		std::cout << "Enter one number\n";
		return -1;
	}
	if (argc == 2)
	{
		n = 0;
		x = std::stoi(argv[1]);
		while (x > n)
			std::cout << n++ << "\n";
	}
	return 0;
}
