#include "Auto.h"


Auto::Auto(int sitze, int topSpeed, int wheelCount) : Fahrzeug(topSpeed), BefoeMittel(sitze), wheelCount(wheelCount)
{
}

Auto::~Auto()
{
}

const int Auto::getWheelCount() const
{
	return wheelCount;
}
