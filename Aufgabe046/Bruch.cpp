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

Bruch & Bruch::operator+=(const Bruch & inBruch)
{
	zaehler = zaehler*inBruch.nenner + inBruch.zaehler*nenner;
	nenner = nenner*inBruch.nenner;
	normalisiere();
	return *this;
}

Bruch & Bruch::operator-=(const Bruch & inBruch)
{
	return (*this) += inBruch*-1;
}

Bruch & Bruch::operator*=(const Bruch & inBruch)
{
	zaehler *= inBruch.zaehler;
	nenner *= inBruch.nenner;
	return *this;
}

Bruch & Bruch::operator/=(const Bruch & inBruch)
{
	return (*this) *= Bruch(inBruch.nenner, inBruch.zaehler);
}

Bruch & Bruch::operator+=(const int value)
{
	zaehler += value*nenner;
	return *this;
}

Bruch & Bruch::operator-=(const int value)
{
	return (*this) += value*-1;
}

Bruch & Bruch::operator*=(const int value)
{
	zaehler *= value;
	return *this;
}

Bruch & Bruch::operator/=(const int value)
{
	nenner *= value;
	return *this;
}

void Bruch::normalisiere()
{
	if (nenner < 0) {
		nenner = -nenner;
		zaehler = -zaehler;
	}
	// Bruch kuerzen
	if (zaehler == 0) {
		nenner = 1;
	}
	else {
		int a = zaehler;
		int b = nenner;
		if (a < 0) {
			a = -a;
		}
		// Suchen des groessten gemeinsamen Teilers
		// Euklidischer Algorithmus
		while (b != 0) {
			int h = a % b;
			a = b;
			b = h;
		}
		// a ist jetzt der groesste gemeinsame Teiler
		zaehler = zaehler / a;
		nenner = nenner / a;
	} // if (zaehler!=0)
}
