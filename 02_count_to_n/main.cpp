#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char **argv)
{
	int n;
	int x;

	if (argc == 1)
	{
		cout << "Enter a number\n";
		return -1;
	}
	if (argc > 2)
	{
		cout << "Enter one number\n";
		return -1;
	}
	if (argc == 2)
	{
		n = 0;
		x = atoi(argv[1]);
		while (x > n)
			cout << n++ << "\n";
	}
	return 0;
}
