#include "Punkt.h"
#include <stdlib.h>
#include <iostream>

using namespace std;

int main()
{
	Punkt a(1,2); 
	Punkt b(2, 3);
	cout << a << endl;
	cout << b << endl<< endl;

	a += b;
	cout << a << endl;
	cout << b << endl << endl;

	b *= 5;
	cout << a << endl;
	cout << b << endl << endl;

	system("pause");
}