#pragma once


template<typename T>
Punkt<T>::Punkt() :coordX(0), coordY(0)
{

}

template<typename T>
Punkt<T>::~Punkt()
{
}

template<typename T>
Punkt<T>::Punkt(const Punkt& punkt) : coordX(punkt.coordX), coordY(punkt.coordY)
{
}

template<typename T>
Punkt<T>::Punkt(T inX, T inY) : coordX(inX), coordY(inY)
{
}

template<typename T>
Punkt<T>& Punkt<T>::operator=(Punkt<T>& inPunkt)
{
	if (this == &inPunkt)
		return *this;
	coordX = inPunkt.coordX;
	coordY = inPunkt.coordY;
	return*this;
}

template<typename T>
const T Punkt<T>::getX() const
{
	return coordX;
}

template<typename T>
const T Punkt<T>::getY() const
{
	return coordY;
}

template<typename T>
void Punkt<T>::setX(T inX)
{
	coordX = inX;
}

template<typename T>
void Punkt<T>::setY(T inY)
{
	coordY = inY;
}

template<typename T>
const T Punkt<T>::getMaxNorm() const
{
	return coordX>coordY ? coordX : coordY;
}
