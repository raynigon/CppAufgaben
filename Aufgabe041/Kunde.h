#pragma once
#include "Kontakt.h"

class Kunde : public Kontakt
{
public:
	Kunde();
	Kunde(string name, int age);
	~Kunde();
	string getMonatsReport();
private:
	int kontostand;
};

