#include "Punkt.h"
#include <iostream>
#include <stdlib.h>

using namespace std;


int main()
{
	Punkt p(25, 257);

	cout << p << endl;
	cout << p.getMaxNorm() << endl;

	for (size_t i = 0; i < UINT_MAX; ++i)
		i++;
}