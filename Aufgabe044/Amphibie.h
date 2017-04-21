#pragma once
#include "Auto.h"
#include "Boot.h"

class Amphibie : public Auto, public Boot
{
public:
	Amphibie(int sitze, int topSpeedLand, int topSpeedWater, int wheelCount, int propCount);
	~Amphibie();
};

