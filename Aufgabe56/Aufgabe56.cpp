#include "Punkt.h"
#include <iostream>

using namespace std;

int main() 
{
	Punkt<int> p(1,2);
	cout << p << endl;

	Punkt<double> q(1.1, 2.2);
	cout << q << endl;
	system("pause");
}