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
private:
	int zaehler;
	int nenner;
public:
	friend std::ostream& operator<< (std::ostream& stream, const Bruch& bruch)
	{
		stream << bruch.zaehler << "/" << bruch.nenner;
		return stream;
	}
};

