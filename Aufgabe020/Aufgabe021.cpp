#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

int main() 
{
	int n1 = 22;
	char* p = (char*) &n1;
	cout << "First:" << n1 << endl;
	p[0] = 1;
	cout << "Second:" << n1 << endl;
	p[1] = 1;
	cout << "Third:" << n1 << endl;
	p[2] = 1;
	cout << "Fourth:" << n1 << endl;
	p[3] = 1;
	cout << "Fifth:" << n1 << endl;

	for (int i = 0; i < INT_MAX; i++)
		++i;

}