#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

int main()
{
	int number0 = 0;
	int number1 = 3782;
	int number2 = 213;
	int number3 = 4000;
	int* p = &number0;
	int i = 0;
	while (p[i] != 213 && i<10)
		i++;
	while (p[i] != 213 && i>-10)
		i--;
	p[i] = 214;
	cout << number2 << endl;
	for (int i = 0; i < INT_MAX; ++i)
		i++;
}