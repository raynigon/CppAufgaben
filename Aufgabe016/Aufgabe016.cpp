#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

struct Polynom {
	double koeffizienten[9];
};

void eval(Polynom& inPoly)
{
	for (size_t i = 0; i < 9; ++i)
	{
		cout << inPoly.koeffizienten[i];
		cout << "x^" << (i + 1);
		if (i == 8)
			continue;
		cout << "+";
	}
}

void add(Polynom& inPolA, Polynom& inPolbB)
{
	for (size_t i = 0; i < 9; ++i) 
	{
		inPolA.koeffizienten[i] += inPolbB.koeffizienten[i];
	}
}

int main() 
{
	
}