#include <iostream>

int main(int argc, char **argv)
{
	int n {0};
	int x {std::stoi(argv[1])};

	if (argc == 2) {
		while (x > n)
			std::cout << n++ << "\n";
		return 0;
	} else {
		std::cerr << "Enter exactly one argument\n";
		return 1;
	}
}
