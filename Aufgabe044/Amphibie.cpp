#include "Amphibie.h"


Amphibie::Amphibie(int sitze, int topSpeedLand, int topSpeedWater, int wheelCount, int propCount) :
	BefoeMittel(sitze), Auto(3, topSpeedLand, wheelCount), Boot(2, topSpeedWater, propCount)
{
}

Amphibie::~Amphibie()
{
}
