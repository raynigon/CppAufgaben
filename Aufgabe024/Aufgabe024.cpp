#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

int main()
{
	int* field = new int[10] {3, 6, 9, 12, 15, 18, 21, 24, 27, 30};

	for (size_t i = 0; i < 10; ++i)
	{
		cout << field[i]<< "\t"<< (field+i) << endl;
	}

	delete[] field;
	for (int i = 0; i < INT_MAX; i++)
		++i;

}