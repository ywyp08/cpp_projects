#include <iostream>

int fibonacci(int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	return fibonacci(n-1) + fibonacci(n-2);
}

void fibonacci_sequence(int n)
{
	int x;

	x = 0;
	while (n > x) {
		std::cout << fibonacci(x++) << std::endl;
	}
}

int main(int argc, char **argv)
{
	int n;

	n = std::stoi(argv[1]);
	fibonacci_sequence(n);
}
