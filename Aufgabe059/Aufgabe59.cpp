#include "Polynom.h"
#include <iostream>

using namespace std;

int main()
{
	Polynom<double> mypol({12.0, 4.2, 3.1});
	cout << "f(0)=" << mypol.calculate(0.0) << " (exp: 12.0)" << endl;
	cout << "f(0)=" << mypol.calculate(1.0) << " (exp: 19.3)" << endl;
	system("pause");
}