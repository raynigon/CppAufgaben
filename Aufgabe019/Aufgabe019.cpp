#include <iostream>
#include <stdlib.h>
#include <string>

using std::cout;
using std::endl;

void swap(double& d1, double& d2)
{
	double tmp = d2;
	d2 = d1;
	d1 = tmp;
}

void swap(double* d1, double* d2)
{
	double tmp = (*d2);
	(*d2) = (*d1);
	(*d1) = tmp;
}

int main()
{
	double d0 = 1.244;
	double d1 = 52.45;
	cout << d0 << "\t" << d1 << endl;
	swap(d0, d1);
	cout << d0 << "\t" << d1 << endl;
	swap(&d0, &d1);
	cout << d0 << "\t" << d1 << endl;

	for (int i = 0; i < INT_MAX; i++)
		i++;
}