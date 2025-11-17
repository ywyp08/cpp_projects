#include <iostream>
using namespace std;

int main()
{
	int n {0};
	int m {1};

	cout << "n: " << n << endl;
	cout << "m: " << m << endl;

	cout << "\nn = m" << endl;
	n = m;

	cout << "n: " << n << endl;
	cout << "m: " << m << endl;

	cout << "\nm++" << endl;
	m++;

	cout << "n: " << n << endl;
	cout << "m: " << m << endl;
}
