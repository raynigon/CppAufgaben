#include "Kunde.h"

using std::to_string;

Kunde::Kunde() : kontostand(0)
{
	
}

Kunde::Kunde(string name, int age) : Kontakt(name, age), kontostand(0)
{

}


Kunde::~Kunde()
{

}

string Kunde::getMonatsReport() 
{
	return string("Aktueller Kontostand:"+to_string(kontostand));
}