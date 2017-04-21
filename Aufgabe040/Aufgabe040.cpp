#include <iostream>
#include <stdlib.h>

using namespace std;


int main()
{
	cout << "ONLY IN SOURCECODE VISIBLE" << endl;
	for (size_t i = 0; i < UINT_MAX; ++i)
		i++;

	/**
	Eine Klasse mit virtuellen Funktionen besitzt eine Funktion LookUp Table,
	in dieser Tabelle sind alle Funktionen mit ihren Pointern gespeichert.
	Wird eine Funktion nun zur Laufzeit aufgerufen, so kann in dieser Tabelle
	nachgeschlagen werden welche Funktion bei dem entsprechendem Aufruf benötigt wird.
	*/
}