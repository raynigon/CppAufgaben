#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

int main()
{
	int number = 1;
	int* p = &number;
	while (true)
		p[++number] = 1;
	cout << "Laueft" << endl;
	cout << "Laueft" << endl;
	cout << "Laueft" << endl;
	cout << "Laueft" << endl;
	cout << "Laueft" << endl;
	cout << "Laueft" << endl;
	cout << "Laueft" << endl;
}