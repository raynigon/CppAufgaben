#include "Polynom.h"
#include <stdlib.h>
#include <iostream>

using namespace std;

int main()
{
	Polynom p = {5.0, 1.0, -0.001, 0.001};
	cout << p.calculate(0.0) << endl;
	cout << p.calculate(-5.0) << endl;
	Polynom d = p + Polynom({-5.0});
	cout << d.calculate(0.0) << endl;
	system("pause");
}