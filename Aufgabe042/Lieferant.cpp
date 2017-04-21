#include "Lieferant.h"



Lieferant::Lieferant()
{
}

Lieferant::Lieferant(string name, int age, string inKonto) : Kontakt(name, age), bankverbindung(inKonto)
{
}


Lieferant::~Lieferant()
{
}

string Lieferant::getMonatsReport()
{
	return string("kontoverbindung:" + bankverbindung);
}