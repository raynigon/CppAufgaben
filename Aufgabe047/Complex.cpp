#include "Complex.h"


Complex::Complex(double rel, double img) : rel(rel), img(img)
{
}

Complex::~Complex()
{
}

Complex & Complex::operator+=(const Complex & comp)
{
	rel += comp.rel;
	img += comp.img;
	return *this;
}

Complex & Complex::operator-=(const Complex & comp)
{
	rel -= comp.rel;
	img -= comp.img;
	return *this;
}

Complex & Complex::operator*=(const Complex & comp)
{
	rel = rel*comp.rel - comp.img*img;
	img = rel*comp.img + comp.rel*img;
	return *this;
}

Complex & Complex::operator/=(const Complex & comp)
{
	double orel = rel;
	double oimg = img;
	double crel = comp.rel;
	double cimg = comp.img;

	double nenner = crel*crel + cimg*cimg;
	rel = (orel*crel + oimg*cimg)/nenner;
	img = (oimg*crel - orel*cimg)/nenner;
	return *this;
}

