#include "FifoQueque.h"
#include "FifoIterator.h"
#include <stdlib.h>
#include <iostream>

using namespace std;

int main()
{
	FifoQueque v = { 12623892, 1890589754, 257889743, 327834894 };
	for (auto it = v.begin(); it != v.end(); ++it)
		cout << *it << endl;
	system("pause");
}