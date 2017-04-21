#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

void arrayCopy(const double* src, double* dest, size_t length)
{
	for (size_t i = 0; i < length; ++i)
	{
		dest[i] = src[i];
	}
}

void printArray(const double* arr, size_t length)
{
	for (size_t i = 0; i < length; ++i)
		cout << arr[i] << endl;
}

int main()
{
	double array[3];
	cout << "Bitte zwei double werte angeben:";
	cin >> array[0];
	cin >> array[1];
	array[2] = array[0] + array[1];
	printArray(array, 3);

	double secondArray[3];
	arrayCopy(array, secondArray, 3);
	printArray(secondArray, 3);

	for (int i = 0; i < INT_MAX; i++)
		i++;
}