#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

int main()
{
	int n1 = 22;
	int n2 = 21;

	int* p;
	int** pp;
	p = &n1;
	pp = &p;
	p = &n2;

	return 0;
}