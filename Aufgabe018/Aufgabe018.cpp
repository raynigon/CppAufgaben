#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

int main()
{
	int a = 12;
	float b = 1.2f;
	
	int* za = &a;
	float* zb = &b;

	cout << "Int:  \tWert:" << a << " \tZeiger:" << za << endl;
	cout << "Float:\tWert:" << b << "\tZeiger:" << zb << endl;

	(*za) = 52;
	(*zb) = 5.2;

	cout << "Int:  \tWert:" << a << " \tZeiger:" << za << endl;
	cout << "Float:\tWert:" << b << "\tZeiger:" << zb << endl;

	for (int i = 0; i < INT_MAX; ++i)
		i++;
}