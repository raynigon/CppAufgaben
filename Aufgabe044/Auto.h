#pragma once
#include "Fahrzeug.h"
class Auto : public Fahrzeug, public virtual BefoeMittel
{
public:
	Auto(int sitze, int topSpeed, int wheelCount);
	~Auto();
	const int getWheelCount() const;
private:
	int wheelCount;
};

