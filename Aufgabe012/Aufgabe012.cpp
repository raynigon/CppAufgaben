#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

int main() 
{
	string text;
	cout << "Bitte int eingeben:";
	cin >> text;
	int a = stoi(text);
	cout << to_string(a) << endl;

	cout << "Bitte float eingeben:";
	cin >> text;
	float b = stof(text);
	cout << to_string(b) << endl;

	cout << "Bitte double eingeben:";
	cin >> text;
	double c = stod(text);
	cout << to_string(c) << endl;


	//Absturz bei fehlerhafter Eingabe
	//Excpetion wird geworfen
}