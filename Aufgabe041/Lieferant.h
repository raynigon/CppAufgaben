#pragma once
#include "Kontakt.h"
class Lieferant :
	public Kontakt
{
public:
	Lieferant();
	Lieferant(string name, int age, string inKonto);
	~Lieferant();
	string getMonatsReport();
private:
	string bankverbindung;
};

