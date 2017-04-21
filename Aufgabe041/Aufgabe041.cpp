#include "Kontakt.h"
#include "Kunde.h"
#include "Lieferant.h"

#include <iostream>
#include <stdlib.h>
#include <vector>

using namespace std;


int main()
{
	vector<Kontakt*> contacts;
	contacts.push_back(new Kunde("Max Mueller", 39));
	contacts.push_back(new Kunde("Time Grau", 26));
	contacts.push_back(new Lieferant("Menfred Fest", 53, "ABCEFG"));
	contacts.push_back(new Lieferant("Thomas Winter", 35, "XYZ123"));

	for (Kontakt* k : contacts)
		cout << k->getName() << "\t" << k->getMonatsReport() << endl;

	for (size_t i = 0; i < UINT_MAX; ++i)
		i++;
}