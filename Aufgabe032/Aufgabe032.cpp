#include <iostream>
#include <stdlib.h>
#include <stdarg.h>
#include <string>
#include <math.h>
#include <fstream>

using namespace std;

double sumAll(int n, double d, ...)
{
	double res = 0.0;
	va_list vl;
	va_start(vl, n);
	res += va_arg(vl, double);
	for (size_t i = 1; i<n; i++)
		res += va_arg(vl, double);
	va_end(vl);
	return res;
}


int main()
{
	cout << sumAll(10, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0);

	for (size_t i = 0; i < UINT_MAX; ++i)
		i++;
}