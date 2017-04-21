#pragma once
#include <iostream>

using std::ostream;

struct Coords {
	int x;
	int y;
};

class Punkt
{
public:
	Punkt();
	~Punkt();
	Punkt(const Punkt& punkt);
	Punkt(int inX, int inY);
	Punkt(Coords inCoords);
	Punkt& operator=(Punkt& inPunkt);
	const int getX() const;
	const int getY() const;
	void setX(int inX);
	void setY(int inY);
	const int getMaxNorm() const;
	Punkt& operator += (const Punkt& inPunkt);
	Punkt& operator -= (const Punkt& inPunkt);
	Punkt& operator *= (const int factor);
private:
	int coordX;
	int coordY;
public:
	friend ostream& operator<< (ostream& os, const Punkt& punkt)
	{
		os << "(" << punkt.coordX << "," << punkt.coordY << ")";
		return os;
	}
	friend Punkt operator+ (const Punkt& inPunktA, const Punkt& inPunktB)
	{
		int x = inPunktA.coordX + inPunktB.coordX;
		int y = inPunktA.coordY + inPunktB.coordY;
		return Punkt(x, y);
	}
	friend Punkt operator- (const Punkt& inPunktA, const Punkt& inPunktB)
	{
		int x = inPunktA.coordX - inPunktB.coordX;
		int y = inPunktA.coordY - inPunktB.coordY;
		return Punkt(x,y);
	}
};

