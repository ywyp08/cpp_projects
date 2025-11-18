#include <iostream>
using namespace std;

int main()
{
	char v[4][8] {"banana", "apple", "orange"};
	char* p = &v[0][2];

	cout << p << endl;
	cout << *p << endl;
	cout << &p << endl;
}
