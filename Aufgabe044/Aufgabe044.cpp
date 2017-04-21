#include "Amphibie.h"
#include <stdlib.h>
#include <iostream>

using namespace std;

int main()
{
	Amphibie a(4, 160, 50, 4, 2);
	cout << ((Auto) a).getTopSpeed() << endl;
	cout << ((Boot) a).getTopSpeed() << endl;
	int spa = ((Auto)a).getSitzplaetze();
	int spb = ((Boot)a).getSitzplaetze();
	int spc = a.getSitzplaetze();
	cout << &spa << endl;
	cout << &spb << endl;
	cout << &spc << endl;
	cout << a.getWheelCount() << endl;
	cout << a.getPropCount() << endl;
	system("Pause");
}