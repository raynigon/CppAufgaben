#include "FifoQueque.h"
#include <stdlib.h>
#include <iostream>

using namespace std;

int main()
{
	FifoQueque q = {12623892, 1890589754, 257889743, 327834894};
	q << 1 << 2 << 3;
	int a, b, c;
	q >> a >> b >> c;
	cout << a << endl;
	cout << b << endl;
	cout << c<< endl;
	cout << q << endl;
	system("pause");
}