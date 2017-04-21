#include <iostream>
#include <stdlib.h>
#include <string>
#include <math.h>

using namespace std;

double x(double lastN)
{
	return 0.5*cos(lastN);
}

int main() 
{
	double delta = 1e-12;
	double last;
	size_t n = 0;
	double current = 1.0;
	do{
		last = current;
		current = x(last);
		n++;
	} while (abs(current - last) > delta);
	cout << "Der Wert ist:" << current << endl;
	cout << "Es wurden " << n << " Iterationen benoetigt" << endl;
	for (int i = 0; i < INT_MAX; i++)
		i++;
}