#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

struct RGB_Pixel
{
	int red;
	int green;
	int blue;
};

int main()
{
	cout << "Groesse eines Pixels:" << sizeof(RGB_Pixel) << "byte" << endl;

	for (int i = 0; i < INT_MAX; i++)
		i++;
}