#include "Punkt.h"



Punkt::Punkt() :coordX(0), coordY(0)
{

}


Punkt::~Punkt()
{
}


Punkt::Punkt(const Punkt& punkt) : coordX(punkt.coordX), coordY(punkt.coordY)
{
}


Punkt::Punkt(int inX, int inY) : coordX(inX), coordY(inY)
{
}


Punkt::Punkt(Coords inCoords) : coordX(inCoords.x), coordY(inCoords.y)
{
}


Punkt& Punkt::operator=(Punkt& inPunkt)
{
	if (this == &inPunkt)
		return *this;
	coordX = inPunkt.coordX;
	coordY = inPunkt.coordY;
	return*this;
}

const int Punkt::getX() const 
{
	return coordX;
}


const int Punkt::getY() const
{
	return coordY;
}


void Punkt::setX(int inX)
{
	coordX = inX;
}


void Punkt::setY(int inY)
{
	coordY = inY;
}


const int Punkt::getMaxNorm() const
{
	return coordX>coordY ? coordX : coordY;
}

Punkt & Punkt::operator+=(const Punkt & inPunkt)
{
	coordX += inPunkt.coordX;
	coordY += inPunkt.coordY;
	return *this;
}

Punkt & Punkt::operator-=(const Punkt & inPunkt)
{
	coordX -= inPunkt.coordX;
	coordY -= inPunkt.coordY;
	return *this;
}

Punkt & Punkt::operator*=(const int factor)
{
	coordX *= factor;
	coordY *= factor;
	return *this;
}
