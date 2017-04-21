#pragma once
#include <vector>

using namespace std;

class Polynom
{
public:
	Polynom();
	Polynom(initializer_list<double> list);
	Polynom(vector<double>& input);
	~Polynom();
	double calculate(double x);
private:
	vector<double> factors;
public:
	friend Polynom operator+ (const Polynom& a, const Polynom& b)
	{
		vector<double> newVec;
		size_t size = a.factors.size() > b.factors.size() ? a.factors.size() : b.factors.size();
		double val = 0.0;
		for (size_t i = 0; i < size; ++i)
		{
			if (i < a.factors.size())
				val += a.factors[i];
			if (i < b.factors.size())
				val += b.factors[i];
			newVec.push_back(val);
		}
		return Polynom(newVec);
	}

	friend Polynom operator- (const Polynom& a, const Polynom& b)
	{
		return a + (b*-1);
	}

	friend Polynom operator* (const Polynom& a, const double value)
	{
		vector<double> newVec;
		for (size_t i = 0; i < a.factors.size(); ++i)
		{
			newVec.push_back(a.factors[i]*value);
		}
		return Polynom(newVec);
	}
	friend Polynom operator/ (const Polynom& a, const double value)
	{
		return a*(1 / value);
	}
};

