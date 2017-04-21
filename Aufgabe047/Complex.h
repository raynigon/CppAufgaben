#pragma once
#include <iostream>

using std::ostream;

class Complex
{
public:
	Complex(double rel, double img);
	~Complex();
	Complex& operator+= (const Complex& comp);
	Complex& operator-= (const Complex& comp);
	Complex& operator*= (const Complex& comp);
	Complex& operator/= (const Complex& comp);
private:
	double rel;
	double img;
public:
	friend ostream& operator<< (ostream& os, const Complex& comp)
	{
		if(comp.img>=0)
			os << comp.rel << "+" << comp.img<< "i";
		else
			os << comp.rel << "-" << abs(comp.img) << "i";

		return os;
	}
};

