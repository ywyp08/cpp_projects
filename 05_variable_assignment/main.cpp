#include <iostream>
using namespace std;

int main()
{
	int n {0};
	int m {1};
	int& r = m;

	cout << "n: " << n << endl;
	cout << "m: " << m << endl;
	cout << "r: " << r << endl;

	n = m;
	cout << "\nn = m" << endl;
	cout << "n: " << n << endl;
	cout << "m: " << m << endl;
	cout << "r: " << r << endl;

	m++;
	cout << "\nm++" << endl;
	cout << "n: " << n << endl;
	cout << "m: " << m << endl;
	cout << "r: " << r << endl;
}
