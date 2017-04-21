// Aufgabe009.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

int main()
{
	bool init = false;
	string s1;
	string s2;
	do {
		if (init)
			cout << u8"Passwoerter stimmen nicht ueberein\nBitte erneut eingeben"<< endl;

		cout << u8"Bitte Passwort eigeben:";
		cin >> s1;
		cout << endl;
		cout << u8"Bitte Wiederholen:";
		cin >> s2;
		init = true;
	} while (s1 != s2);
	cout << u8"Passwoerter stimmen ueberein!"<< endl;
    return 0;
}

