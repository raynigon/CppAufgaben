#pragma once
#include <iostream>

using std::ostream;

struct Coords {
	int x;
	int y;
};

template<typename T>
class Punkt
{
public:
	Punkt();
	~Punkt();
	Punkt(const Punkt& punkt);
	Punkt(T inX, T inY);
	//Punkt(Coords inCoords);
	Punkt& operator=(Punkt& inPunkt);
	const T getX() const;
	const T getY() const;
	void setX(T inX);
	void setY(T inY);
	const T getMaxNorm() const;
private:
	T coordX;
	T coordY;
public:
	friend ostream& operator<< (ostream& os, const Punkt& punkt)
	{
		os << "(" << punkt.coordX << "," << punkt.coordY << ")";
		return os;
	}
};

#include "PunktImpl.h"
