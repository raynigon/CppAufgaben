#include "Boot.h"


Boot::Boot(int sitze, int topSpeed, int propsCount) : Fahrzeug(topSpeed), BefoeMittel(sitze), propsCount(propsCount)
{
}

Boot::~Boot()
{
}

const int Boot::getPropCount() const
{
	return propsCount;
}
