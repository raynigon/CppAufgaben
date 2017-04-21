#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

int main()
{
	char* text = "hallo";

	do{
		cout << (*text) << "\t";
		cout << (int)(*text) << "\t";
		cout << (int*) text << endl;
		text++;
	} while ((*(text - 1)) != '\0');

	for (int i = 0; i < INT_MAX; i++)
		++i;

}