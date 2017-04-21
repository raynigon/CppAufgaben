#include "Kontakt.h"



Kontakt::Kontakt() : name("Max Mustermann"), age(31)
{
	
}


Kontakt::~Kontakt()
{

}


Kontakt::Kontakt(string& inName, int inAge) : name(inName), age(inAge)
{

}


Kontakt::Kontakt(const Kontakt& kontakt) : name(kontakt.name), age(kontakt.age)
{

}


const int Kontakt::getAge() const
{
	return age;
}

const string& Kontakt::getName() const 
{
	return name;
}

void Kontakt::setAge(int inAge)
{
	age = inAge;
}


void Kontakt::setName(string& inName)
{
	name = inName;
}