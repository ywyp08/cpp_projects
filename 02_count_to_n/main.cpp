#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int n;
	int x;

	if (argc != 2)
		return(-1);
	n = atoi(argv[1]);
	x = 0;
	while (x < n)
		printf("%d\n", x++);
}
