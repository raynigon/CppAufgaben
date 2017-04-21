#pragma once
#include <iostream>

using std::ostream;

template<typename T>
class Complex
{
public:
	Complex(T rel, T img);
	~Complex();
	Complex& operator+= (const Complex<T>& comp);
	Complex& operator-= (const Complex<T>& comp);
	Complex& operator*= (const Complex<T>& comp);
	Complex& operator/= (const Complex<T>& comp);
private:
	T rel;
	T img;
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

#include "ComplexImpl.h"