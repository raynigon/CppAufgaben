#pragma once
#include "Fahrzeug.h"
class Boot : public Fahrzeug, public virtual BefoeMittel
{
public:
	Boot(int sitze, int topSpeed, int propsCount);
	~Boot();
	const int getPropCount() const;
private:
	int propsCount;
};

