#include "Complex.h"
#include <iostream>

using namespace std;


int main()
{
	Complex<int> c0(1,2);
	Complex<double> c1(3.2, -4.1);
	
	cout << c0 << endl;
	cout << c1 << endl;
	system("pause");
}