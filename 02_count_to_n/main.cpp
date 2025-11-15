#include <iostream>

int main(int argc, char **argv)
{
	int n;
	int x;

	if (argc == 2) {
		n = 0;
		x = std::stoi(argv[1]);
		while (x > n)
			std::cout << n++ << "\n";
		return 0;
	} else {
		std::cerr << "Enter exactly one argument\n";
		return 1;
	}
}
