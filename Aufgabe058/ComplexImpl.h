#pragma once

template<typename T>
Complex<T>::Complex(T rel, T img) : rel(rel), img(img)
{
}

template<typename T>
Complex<T>::~Complex()
{
}

template<typename T>
Complex<T>& Complex<T>::operator+=(const Complex<T> & comp)
{
	rel += comp.rel;
	img += comp.img;
	return *this;
}

template<typename T>
Complex<T> & Complex<T>::operator-=(const Complex<T> & comp)
{
	rel -= comp.rel;
	img -= comp.img;
	return *this;
}

template<typename T>
Complex<T> & Complex<T>::operator*=(const Complex<T> & comp)
{
	rel = rel*comp.rel - comp.img*img;
	img = rel*comp.img + comp.rel*img;
	return *this;
}

template<typename T>
Complex<T> & Complex<T>::operator/=(const Complex<T> & comp)
{
	double orel = rel;
	double oimg = img;
	double crel = comp.rel;
	double cimg = comp.img;

	double nenner = crel*crel + cimg*cimg;
	rel = (orel*crel + oimg*cimg) / nenner;
	img = (oimg*crel - orel*cimg) / nenner;
	return *this;
}

