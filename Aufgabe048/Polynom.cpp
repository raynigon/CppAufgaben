#include "Polynom.h"



Polynom::Polynom()
{
}

Polynom::Polynom(initializer_list<double> list)
{
	for (double d : list)
		factors.push_back(d);
}

Polynom::Polynom(vector<double>& input)
{
	for (double d : input)
		factors.push_back(d);
}


Polynom::~Polynom()
{
}

double Polynom::calculate(double x)
{
	double res = 0.0;
	for (size_t i = 0; i < factors.size(); ++i)
		res += factors[i]*pow(x, i);
	return res;
}
