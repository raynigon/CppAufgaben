#pragma once
#include <iostream>

template<typename T>
class Bruch
{
public:
	Bruch();
	~Bruch();
	Bruch(T inZaehler, T inNenner);
	Bruch(const Bruch<T>& bruch);
	T getZaehler();
	T getNenner();
	void setZaehler(T inZaehler);
	void setNenner(T inNenner);
private:
	T zaehler;
	T nenner;
public:
	friend std::ostream& operator<< (std::ostream& stream, const Bruch& bruch)
	{
		stream << bruch.zaehler << "/" << bruch.nenner;
		return stream;
	}
};

#include "BruchImpl.h"
