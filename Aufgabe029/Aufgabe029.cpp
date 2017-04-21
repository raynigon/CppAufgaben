#include <iostream>
#include <stdlib.h>
#include <string>
#include <math.h>

using namespace std;

double valueA;

typedef double(*mathFunction)(double inX);

double approx(mathFunction fct, double lastX, double epsilon) 
{
	double nX = fct(lastX);
	if (abs(lastX - nX) < epsilon)
		return nX;

	return approx(fct, nX, epsilon);
}

double appsqrt(double inX) 
{
	return (inX + (valueA / inX)) / 2;
}

int main()
{
	valueA = 2;

	cout << "Sqrt from " << valueA << " => ";
	cout << approx(appsqrt, 1.0, 0.001) << endl;

	for (int i = 0; i < INT_MAX; i++)
		++i;

}
