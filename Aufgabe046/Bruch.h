#pragma once
#include <iostream>



class Bruch
{
public:
	Bruch();
	~Bruch();
	Bruch(int inZaehler, int inNenner);
	Bruch(const Bruch& bruch);
	int getZaehler();
	int getNenner();
	void setZaehler(int inZaehler);
	void setNenner(int inNenner);
	Bruch& operator+= (const Bruch& inBruch);
	Bruch& operator-= (const Bruch& inBruch);
	Bruch& operator*= (const Bruch& inBruch);
	Bruch& operator/= (const Bruch& inBruch);
	Bruch& operator+= (const int value);
	Bruch& operator-= (const int value);
	Bruch& operator*= (const int value);
	Bruch& operator/= (const int value);

private:
	int zaehler;
	int nenner;
	void normalisiere();
public:
	friend std::ostream& operator<< (std::ostream& stream, const Bruch& bruch)
	{
		stream << bruch.zaehler << "/" << bruch.nenner;
		return stream;
	}
	friend Bruch operator+(const Bruch& inBruchA, const Bruch& inBruchB)
	{
		int zaehler = inBruchA.zaehler*inBruchB.nenner+inBruchB.zaehler*inBruchA.nenner;
		int nenner = inBruchA.nenner*inBruchB.nenner;
		Bruch b(zaehler, nenner);
		b.normalisiere();
		return b;
	}
	friend Bruch operator-(const Bruch& inBruchA, const Bruch& inBruchB)
	{
		Bruch tmp = inBruchB*-1;
		return inBruchA+tmp;
	}
	friend Bruch operator*(const Bruch& inBruchA, const Bruch& inBruchB)
	{
		int zaehler = inBruchA.zaehler*inBruchB.zaehler;
		int nenner = inBruchA.nenner*inBruchB.nenner;
		return Bruch(zaehler, nenner);
	}
	friend Bruch operator/(const Bruch& inBruchA, const Bruch& inBruchB)
	{
		Bruch rev(inBruchB.nenner, inBruchB.zaehler);
		return inBruchA*rev;
	}
	friend Bruch operator*(const Bruch& inBruchA, const int value)
	{
		int zaehler = inBruchA.zaehler*value;
		return Bruch(zaehler, inBruchA.nenner);
	}
	friend Bruch operator/(const Bruch& inBruchA, const int value)
	{
		int nenner = inBruchA.nenner*value;
		return Bruch(inBruchA.zaehler,nenner);
	}
};

