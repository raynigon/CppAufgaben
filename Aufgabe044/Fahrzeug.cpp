#include "Fahrzeug.h"


Fahrzeug::Fahrzeug(int topSpeed) : topSpeed(topSpeed)
{
}

Fahrzeug::~Fahrzeug()
{
}

const int Fahrzeug::getTopSpeed() const
{
	return topSpeed;
}
