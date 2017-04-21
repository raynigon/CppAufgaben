#include "Bruch.h"
#include <stdlib.h>
#include <iostream>

using namespace std;

int main()
{
	Bruch b(5,3);
	Bruch c(12, 53);
	b -= c;
	b += c;

	cout << b << endl;
	cout << c << endl;

	Bruch d = b + c;
	Bruch e = d-c;

	cout << b << endl;
	cout << c << endl;
	cout << d << endl;
	cout << e << endl;

	system("pause");
}