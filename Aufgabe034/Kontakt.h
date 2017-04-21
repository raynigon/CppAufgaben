#pragma once
#include <string>
#include <iostream>

using std::string;
using std::ostream;

class Kontakt
{
public:
	Kontakt();
	~Kontakt();
	Kontakt(string& inName, int inAge);
	Kontakt(const Kontakt& kontakt);
	const int getAge() const;
	const string& getName() const;
	void setAge(int inAge);
	void setName(string& inName);
private:
	string name;
	int age;
public:
	friend ostream& operator<< (ostream& os, Kontakt& kontakt) 
	{
		os << kontakt.name << ", " << kontakt.age;
		return os;
	}
};

