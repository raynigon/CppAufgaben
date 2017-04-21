#pragma once
#include "BefoeMittel.h"
class Fahrzeug
{
public:
	Fahrzeug(int topSpeed);
	~Fahrzeug();
	const int getTopSpeed() const;
private:
	int topSpeed;
};

