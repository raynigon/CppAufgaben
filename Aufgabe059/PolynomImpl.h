#pragma once
#include "Polynom.h"


template<typename T>
Polynom<T>::Polynom()
{
}

template<typename T>
Polynom<T>::Polynom(initializer_list<T> list)
{
	for (double d : list)
		factors.push_back(d);
}

template<typename T>
Polynom<T>::Polynom(vector<T>& input)
{
	for (double d : input)
		factors.push_back(d);
}

template<typename T>
Polynom<T>::~Polynom()
{
}

template<typename T>
T Polynom<T>::calculate(T x)
{
	double res = 0.0;
	for (size_t i = 0; i < factors.size(); ++i)
		res += factors[i] * pow(x, i);
	return res;
}
