#include "Line.h"

#include <iostream>
#include <stdlib.h>
#include <vector>

using namespace std;


int main()
{
	Line line;
	cout << line.set_P1(1,2) << endl;
	cout << line.set_P2(3, 4) << endl;
	cout << line << endl;
	line.draw();

	for (size_t i = 0; i < UINT_MAX; ++i)
		i++;
}