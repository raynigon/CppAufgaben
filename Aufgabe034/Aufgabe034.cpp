#include "Kontakt.h"
#include <iostream>
#include <stdlib.h>

using namespace std;


int main()
{
	string name("Simon Schneider");
	Kontakt k(name, 19);
	cout << k << endl;

	for (size_t i = 0; i < UINT_MAX; ++i)
		i++;
}