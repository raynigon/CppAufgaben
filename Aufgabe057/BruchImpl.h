#include "Bruch.h"


template<typename T>
Bruch<T>::Bruch() : zaehler(1), nenner(1)
{

}

template<typename T>
Bruch<T>::~Bruch()
{
}

template<typename T>
Bruch<T>::Bruch(T inZaehler, T inNenner) : zaehler(inZaehler), nenner(inNenner)
{
}

template<typename T>
Bruch<T>::Bruch(const Bruch<T>& bruch) : zaehler(bruch.zaehler), nenner(bruch.nenner)
{
}

template<typename T>
T Bruch<T>::getZaehler()
{
	return zaehler;
}

template<typename T>
T Bruch<T>::getNenner()
{
	return nenner;
}

template<typename T>
void Bruch<T>::setZaehler(T inZaehler)
{
	zaehler = inZaehler;
}

template<typename T>
void Bruch<T>::setNenner(T inNenner)
{
	if (inNenner == 0)
		throw 0;
	nenner = inNenner;
}
