#include "Bruch.h"



Bruch::Bruch() : zaehler(1), nenner(1)
{

}


Bruch::~Bruch()
{
}


Bruch::Bruch(int inZaehler, int inNenner) : zaehler(inZaehler), nenner(inNenner)
{
}


Bruch::Bruch(const Bruch& bruch) : zaehler(bruch.zaehler), nenner(bruch.nenner)
{
}


int Bruch::getZaehler()
{
	return zaehler;
}


int Bruch::getNenner()
{
	return nenner;
}


void Bruch::setZaehler(int inZaehler)
{
	zaehler = inZaehler;
}


void Bruch::setNenner(int inNenner)
{
	if (inNenner == 0)
		throw 0;
	nenner = inNenner;
}
